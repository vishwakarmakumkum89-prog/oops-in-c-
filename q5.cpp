#include <iostream>
using namespace std;

class Employee
{
    int employeeId;
    string name;
    float salary;

public:
    Employee()
    {
        employeeId = 0;
        name = "Unknown";
        salary = 0;
    }

    Employee(int id, string n, float s)
    {
        employeeId = id;
        name = n;
        salary = s;
    }

    Employee(const Employee &e)
    {
        employeeId = e.employeeId;
        name = e.name;
        salary = e.salary;
    }

    void display() const
    {
        cout << "Employee ID: " << employeeId << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }

    void updateSalary(float s)
    {
        salary = s;
    }
};

int main()
{
    const Employee e1(101, "KUMKUM", 50000);

    cout << "Const Employee Object:\n";
    e1.display();

    Employee e2 = e1;

    cout << "\nCopied Employee Object:\n";
    e2.display();


    return 0;
}