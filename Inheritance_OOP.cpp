#include <iostream>

using namespace std;

class clsPerson
{

private:
    int _ID;
    string _FirstName;
    string _LastName;
    string _Email;
    string _Phone;


public:
    clsPerson(int ID, string FirstName, string LastName, string Email, string Phone) {
        _ID = ID;
        _FirstName = FirstName;
        _LastName = LastName;
        _Email = Email;
        _Phone = Phone;
        cout << "clsPerson\n";
    }

    ~clsPerson() {
        cout << "~clsPerson\n";
    }
    // Read Only Property
    int ID() {
        return _ID;
    }

    // Property Set
    void setFirstName(string FirstName) {
        _FirstName = FirstName;
    }

    // Property Get
    string FirstName() {
        return _FirstName;
    }

    // Property Set
    void setLastName(string LastName) {
        _LastName = LastName;
    }

    // Property Get
    string LastName() {
        return _LastName;
    }

    // Property Set
    void setEmail(string Email) {
        _Email = Email;
    }

    // Property Get
    string Email() {
        return _Email;
    }

    // Property Set
    void setPhone(string Phone) {
        _Phone = Phone;
    }

    // Property Get
    string Phone() {
        return _Phone;
    }

    string FullName() {
        return _FirstName + " " + _LastName;
    }

    void SendEmail(string subject, string body)
    {
        cout << "The following meassage send successfully to email: " << _Email << '\n';
        cout << "Subject: " << subject << '\n';
        cout << "Body: " << body << '\n';

    }

    void SendSms(string message)
    {
        cout << "The following SMS send successfully to phone: " << _Phone << '\n';
        cout << message << '\n';

    }

    void Print()
    {

        cout << "Info:\n";
        cout << "____________________________________\n";
        cout << "ID       :" << _ID << "\n";
        cout << "FirstName:" << _FirstName << "\n";
        cout << "LastName :" << _LastName << "\n";
        cout << "Full Name:" << FullName() << "\n";
        cout << "Email    :" << _Email << "\n";
        cout << "Phone    :" << _Phone << "\n";
        cout << "____________________________________\n\n";


    }
};

class clsEmployee : public clsPerson
{

private:
    string _Title;
    string _Department;
    float _Salary;

public:

    clsEmployee(int ID, string FirstName, string LastName, string Email, string Phone, string Title, string Department, float Salary)
        : clsPerson(ID, FirstName, LastName, Email, Phone)

    {

        _Title = Title;
        _Department = Department;
        _Salary = Salary;
        cout << "clsEmployee\n";
    }

    ~clsEmployee() {
        cout << "~clsEmployee\n";
    }
    //Property Set
    void setTitle(string Title)
    {
        _Title = Title;
    }

    //Property Get
    string Title()
    {
        return _Title;
    }

    //Property Set
    void setDepartment(string Department)
    {
        _Department = Department;
    }

    //Property Get
    string Department()
    {
        return _Department;
    }

    //Property Set
    void setSalary(float Salary)
    {
        _Salary = Salary;
    }

    //Property Get
    float Salary()
    {
        return _Salary;
    }

};


int main()

{

    clsEmployee Employee1(10, "Mohammed", "Almomany", "A@a.com", "8298982", "Med-Engineer", "Engineering", 3000);

    Employee1.Print();
    cout << "\n" << Employee1.Title() << endl;
    cout << "\n" << Employee1.Department() << endl;
    cout << "\n" << Employee1.Salary() << endl;


    system("pause>0");
    return 0;
}