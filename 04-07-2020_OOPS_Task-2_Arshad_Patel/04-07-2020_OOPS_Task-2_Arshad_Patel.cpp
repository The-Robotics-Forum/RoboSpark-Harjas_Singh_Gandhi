#include<bits/stdc++.h>
using namespace std;

class Student
{

    public: 
    string name;
    int roll;
    int year;
    float cgpa;

    // Input Details
    void enterDetails()
    {
        cout << "\n>>Please enter the following details => " << endl;
        cout << ">>Enter your first name: ";
        cin >> name;
        cout << ">>Enter your roll number: ";
        cin >> roll;
        cout << ">>Enter your current year: ";
        cin >> year;
        cout << ">>Enter CGPA: ";
        cin >> cgpa;
        cout << endl;
    }

};

// Only rank as input
void showRank(int rank)
{
    cout << "Only one integer argument found!!!" << endl;
    cout << "\nRank: " << rank << endl;
}

// Student details as input
void showRank(string name, int year, int roll, float cgpa)
{
        cout << "Only four arguments found!!!" << endl;
        cout << "\nName: " << name << endl;
        cout << "Roll No:" << roll << endl;
        cout << "CGPA: " << cgpa << endl;
        cout << "Year: " << year << endl;
        cout << "No Rank Found!!!" << endl;
}

// Everything as input
void showRank(string name, int year, int roll, float cgpa, int rank)
{
        cout << "\nThe Entered Student Details are => " << endl;
        cout << "\nName: " << name << endl;
        cout << "Roll No: " << roll << endl;
        cout << "CGPA: " << cgpa << endl;
        cout << "Year: " << year << endl;
        cout << "Rank: " << rank << endl;
}

int main()
{
    int rank, chk;

    Student s1;
    s1.enterDetails();

    cout << ">>Please Enter the Rank of the student" << endl;
    cin >> rank;

    cout << "\n>>You are ready to print the entered details, please choose one of the following opptions: " << endl;
    cout << "1: Print rank only \t 2: Print student details only \t 3: Print Everything" << endl;
    cin >> chk;

    switch (chk)
    {
    case 1:
        showRank(rank);
        break;
    case 2:
        showRank(s1.name, s1.year, s1.roll, s1.cgpa);
        break;
    case 3:
        showRank(s1.name, s1.year, s1.roll, s1.cgpa, rank);
        break;
    default:
        cout << "[!!] Error, Invalid input" << endl;
        exit(0);
    }

} 