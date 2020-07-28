import cv2
import numpy as np
from time import sleep

# Initializing video capture
cap = cv2.VideoCapture(0)

ret, frame = cap.read()
old_Gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)

# Lucas-Kanade Params
lkParams = dict(winSize=(20, 20),
                maxLevel=4,
                criteria=(cv2.TermCriteria_EPS | cv2.TERM_CRITERIA_COUNT, 10, 0.03))

def selectObject(event, x, y, flags, params):
    global point, Selected, old_Point
    if event == cv2.EVENT_LBUTTONDOWN:
        point = (x, y)
        Selected = True
        old_Point = np.array([[x, y]], dtype=np.float32)

cv2.namedWindow("Frame")
cv2.setMouseCallback("Frame", selectObject)

Selected = False
point = ()
old_Point = np.array([[]])

# While Loop
while True:
    ret, frame = cap.read()
    gray_Frame = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)

    if Selected is True:
        new_Point, status, error = cv2.calcOpticalFlowPyrLK(old_Gray, gray_Frame, old_Point, None, **lkParams)
        old_Gray = gray_Frame.copy()
        if new_Point[0][0] + 1 < old_Point[0][0]:
            dir = 'LEFT'
        elif new_Point[0][0] - 1 > old_Point[0][0]:
            dir = 'RIGHT'
        else:
            dir = 'STILL'
        old_Point = new_Point
        x, y = new_Point.ravel()
        cv2.circle(frame, (x, y), 5, (0, 255, 0), -1)
        cv2.putText(frame, dir, (200, 450), cv2.FONT_HERSHEY_SIMPLEX, 0.8, (255, 0, 0), 2)
    else:
        dir = 'SELECT OBJECT'
        cv2.putText(frame, dir, (200, 450), cv2.FONT_HERSHEY_SIMPLEX, 0.8, (255, 0, 0), 2)

    cv2.imshow("Frame", frame)
    sleep(0.1)
    key = cv2.waitKey(1)
    if key == 32:
        break

cap.release()
cv2.destroyAllWindows()