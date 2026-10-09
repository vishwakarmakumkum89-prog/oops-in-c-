#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    string name;
    int rollno;

    // Default constructor
    student()
    {
        name = "student";
        rollno = 0;
    }

    // Parameterized constructor
    student(string n, int r)
    {
        name = n;
        rollno = r;
    }

    void display()
    {
        cout << "Name is: " << name << endl;
        cout << "Roll no is: " << rollno << endl;
    }

    // Function overloading
    void data()
    {
        cout << "Data of student:" << endl;
    }

    void data(string n)
    {
        cout << "Data of student:" << endl;
        cout << "Name is: " << n << endl;
    }

    int data(int r)
    {
        cout << "Data of student:" << endl;
        cout << "Roll no is: " << r << endl;
        return r;
    }
};

int main()
{
    student s1;
    student s2("Qamru", 22);

    s1.data();
    s1.display();

    cout << endl;

    s2.data("Qamru");
    s2.display();

    return 0;
}