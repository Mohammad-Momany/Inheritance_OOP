#pragma once
#include <iostream>
#include "clsPerson.h"
#include "clsEmployee.h"

using namespace std;



class clsDeveloper : public clsEmployee
{

private:
    string _MainProgrammingLanguage;

public:
    clsDeveloper(int ID, string FirstName, string LastName, string Email, string Phone, string Title, string Department, float Salary, string MainProgrammingLanguage)
        : clsEmployee(ID, FirstName, LastName, Email, Phone, Title, Department, Salary)
    {
        _MainProgrammingLanguage = MainProgrammingLanguage;
    }

    //Property Set
    void setMainProgrammingLanguage(string MainProgrammingLanguage)
    {
        _MainProgrammingLanguage = MainProgrammingLanguage;
    }

    //Property Get
    string MainProgrammingLanguage()
    {
        return _MainProgrammingLanguage;
    }


    void Print()
    {

        cout << "\nInfo:";
        cout << "\n____________________________________________";
        cout << "\nID                     : " << ID();
        cout << "\nFirstName              : " << FirstName();
        cout << "\nLastName               : " << LastName();
        cout << "\nFull Name              : " << FullName();
        cout << "\nEmail                  : " << Email();
        cout << "\nPhone                  : " << Phone();

        cout << "\nTitle                  : " << Title();
        cout << "\nDepartment             : " << Department();
        cout << "\nSalary                 : " << Salary();

        cout << "\nMainProgrammingLanguage: " << MainProgrammingLanguage();

        cout << "\n____________________________________________\n";

    }

};