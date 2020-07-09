#include<bits/stdc++.h>
using namespace std;
//Personal Data
class bioData
{
    protected:
        string name;
        string surname;
        string address;
        string phNum;
        string dob;

        // Default Constructor
        bioData()
        {
            cout << "Bio-Data Class" << endl;
        }

        // Setting Personal Data
        void setbioData()
        {
            cout << ">> Enter your first name: ";
            cin >> name;

            cout << ">> Enter your surname: ";
            cin >> surname;

            cout << ">> Enter your complete address: ";
            fflush(stdin);
            getline(cin, address);

            cout << ">> Enter your 10-digit mobile Num: ";
            cin >> phNum;

            cout << ">> Enter your Date of Birth in DD-MM-YYYY format: ";
            cin >> dob;
        }

        //Displaying Bio-Data
        void dBioData()
        {
            cout << "First Name: " << name << endl;
            cout << "Surname: " << surname << endl;
            cout << "Address: " << address << endl;
            cout << "Mobile Number: " << phNum << endl;
            cout << "Date Of Birth: " << dob << endl;
        }

};

// Class FOr Professional Data
class profData
{
    protected:
        string nameOfOrganization;
        string jobProfile;
        string project;

        // Default Constructor
        profData()
        {
            cout << "Proffessional Data Class" << endl;
        }

        // Setting Professional Data 
        void setProfData()
        {
            cout << ">> Enter the name of organization you work for: ";
            fflush(stdin);
            getline(cin, nameOfOrganization);

            cout << ">> Enter your job profile: ";
            fflush(stdin);
            getline(cin, jobProfile);

            cout << ">> List out some interesting projects you have worked on: ";
            fflush(stdin);
            getline(cin, project);
        }

        // Displaying Professional Data
        void dProfData()
        {
            cout << "Name Of Organization: " << nameOfOrganization << endl;
            cout << "Job Profile: " << jobProfile << endl;
            cout << "Projects Done: " << project << endl;   
        }

};

// Class For Academic Data
class acadData
{
    protected:
        string yearOfPassing;
        string cgpa;
        string collegeName;
        string branch;

        // Default Constructor
        acadData()
        {
            cout << "Academic Data Class" << endl;
        }

        // Setting Academic Data
        void setAcadData()
        {
            cout << ">> Enter the year of passing in YYYY format: ";
            cin >> yearOfPassing;
            
            cout << ">> Enter your cgpa: ";
            cin >> cgpa;

            cout << ">> Enter your College name: ";
            fflush(stdin);
            getline(cin, collegeName);

            cout << ">> Enter your branch name: ";
            fflush(stdin);
            getline(cin, branch);
        }

        // Displaying Academic Data
        void dAcadData()
        {
            cout << "Year Of Passing: " << yearOfPassing << endl;
            cout << "CGPA: " << cgpa << endl;
            cout << "College Name: " << collegeName << endl;
            cout << "Branch: " << branch << endl;
        }
};

class Data : public bioData, public profData, public acadData
{
    public:

        Data()
        {
            cout << "Data Class" << endl;
        }

        // Setting Data
        void setData()
        {
            cout << "\nEnter your Personal Data => " << endl;
            setbioData();
            cout << "\nEnter your Professional Data => " << endl;
            setProfData();
            cout << "\nEnter your Academic Data => " << endl;
            setAcadData();
            cout << "\nStudent Registration Completed Successfully!!!" << endl;
            cout << "Press any key to display the data" << endl;
            getchar();
        }

        // Displaying  Data
        void dData()
        {
            cout << "Personal Data => " << endl;
            dBioData();
            cout << "\nProfessional Data => " << endl;
            dProfData();
            cout << "\nAcademic Data => " << endl;
            dAcadData();
        }
};

// Main Function
int main()
{
    Data student1; 
    student1.setData();
    student1.dData();
}
