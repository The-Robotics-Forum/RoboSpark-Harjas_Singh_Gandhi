import cv2

color = cv2.imread('Copy of text.jpg')
gray = cv2.cvtColor(color, cv2.COLOR_RGB2GRAY)
hsv = cv2.cvtColor(color, cv2.COLOR_RGB2HSV)
res = cv2.resize(color,(300,300))
print("Original image shape", color.shape)
print("Original image size", color.size)
print("Resized image shape", res.shape)
print("Resized image size", res.size)

cv2.imshow('Orginal',color)
cv2.imshow('Grayscale',gray)
cv2.imshow('HSV',hsv)
cv2.imshow('Resized',res)

#thresholding
ret, thresh=cv2.threshold(gray,150,255,cv2.THRESH_BINARY)
cv2.imshow('threshold_binary',thresh)
ret, thresh1=cv2.threshold(gray,150,255,cv2.THRESH_BINARY_INV)
cv2.imshow('threshold_inv',thresh1)
ret, thresh2=cv2.threshold(gray,150,255,cv2.THRESH_OTSU)
cv2.imshow('threshold_otsu',thresh2)
ret, thresh3=cv2.threshold(gray,150,255,cv2.THRESH_MASK)
cv2.imshow('threshold_mask',thresh3)
ret, thresh4=cv2.threshold(gray,150,255,cv2.THRESH_TOZERO)
cv2.imshow('threshold_tozero',thresh4)
ret, thresh5=cv2.threshold(gray,150,255,cv2.THRESH_TOZERO_INV)
cv2.imshow('threshold_tozero_inv',thresh5)
ret, thresh6=cv2.threshold(gray,150,255,cv2.THRESH_TRIANGLE)
cv2.imshow('threshold_triangle',thresh6)
ret, thresh7=cv2.threshold(gray,150,255,cv2.THRESH_TRUNC)
cv2.imshow('threshold_trunc',thresh7)

#adaptive thresholding
adaptive_thresh=cv2.adaptiveThreshold(gray,255,cv2.ADAPTIVE_THRESH_MEAN_C,cv2.THRESH_BINARY,5,2)
cv2.imshow('ada_mean_binary',adaptive_thresh)
adaptive_thresh2=cv2.adaptiveThreshold(gray,255,cv2.ADAPTIVE_THRESH_MEAN_C,cv2.THRESH_BINARY_INV,5,2)
cv2.imshow('ada_mean_inv_binary',adaptive_thresh2)

adaptive_thresh3=cv2.adaptiveThreshold(gray,255,cv2.ADAPTIVE_THRESH_GAUSSIAN_C,cv2.THRESH_BINARY,5,2)
cv2.imshow('ada_gaus_binary',adaptive_thresh3)
adaptive_thresh4=cv2.adaptiveThreshold(gray,255,cv2.ADAPTIVE_THRESH_GAUSSIAN_C,cv2.THRESH_BINARY_INV,5,2)
cv2.imshow('ada_gaus_inv_binary',adaptive_thresh4)

cv2.imwrite('gray.jpg', gray)
cv2.imwrite('hsv.jpg', hsv)
cv2.imwrite('threshold_binary.jpg', thresh)
cv2.imwrite('threshold_inv.jpg', thresh1)
cv2.imwrite('ada_mean_binary.jpg', adaptive_thresh)
cv2.imwrite('ada_gaus_binary.jpg', adaptive_thresh3)

cv2.waitKey(0)
cv2.destroyAllWindows()