#include<bits/stdc++.h>
using namespace std;

// String Class
class String
{
    char str[50];
    char cpy[50];

    public:

    // function declarations
    void operator+ (String str1);
    void operator* (int num);

    // friend function
    friend istream& operator >> (istream &cin, String &str);
    friend ostream& operator << (ostream &cout, const String &str);
};

// + , * operators overloading
void String :: operator+(String str1)
{
   strcat(str,str1.str);
   cout << "String Concatenation Complete: " << str << endl;
}

void String :: operator*(int num)
{
    char cpy[50];
    strcpy(cpy, str);
    for(int i=1;i<num;i++)
    {
        strcat(str,cpy);
    }
    cout << "String Multiplication Complete: " << str << endl;
}

// input/output functions overloading
istream& operator >> (istream &cin, String &str)
{
    cout << ">> Enter the String: " << endl;
    cin >> str.str;
    return cin;
}

ostream& operator << (ostream &cout, const String &str)
{
    cout << "The String you want to display is: " << str.str << endl;
    return cout;
}
//main function
int main()
{
    int chk, num,ext=1;
    String s1, s2; // object declaration
    // String Input
    cout << "First String => " << endl;
    cin >> s1;
    cout << "Second String => " << endl;
    cin >> s2;
    while (ext)
    {
    cout << "\n>> Please enter one of the following option: " << endl;
    cout << "1: Concatenation of both strings \t 2: Multiply a num to String" << endl;
    cout << "3: Display String 1 \t 4: Exit the program" << endl;
    cin >> chk;
    // Switch case for main-menu
    switch(chk)
    {
        case 1:
            s1 + s2;
            break;
        case 2:
            cout << "Enter the number by which you want to multiply to String 1: " << endl;
            cin >> num;
            s1 * num;
            break;
        case 3:
            cout << s1 << endl;
            break;
        case 4:
            cout << "Exiting..." << endl;
            ext=0;
            break;
        default:
            cout << "[!!] Invalid Input, Try Again..." << endl;
    }
    }   
}