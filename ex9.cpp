#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
    int rollNumber;
    string name;
    float marks;
    void read(){
        cout << "Enter Roll Number : ";
        cin >> rollNumber;
        cout << "Enter Name : ";
        cin >> name;
        cout << "Enter Marks : ";
        cin >> marks;
    }
    void display(){
        cout << "Roll no. : " << rollNumber << endl;
        cout << "Name : " << name << endl;
        cout << "Marks : " << marks << endl;
    }
};
int main(){
    int n;
    cout << "Enter no. of students : ";
    cin >> n;
    Student* students = new Student[n];
    for(int i = 0; i < n; i++){
        cout << "\nEnter details of Student " << i + 1 << ":\n";
        students[i].read();
    }
    cout << "\nStudent Records\n";
    for(int i = 0; i < n; i++){
        cout << "\nStudent " << i + 1 << ":\n";
        students[i].display();
    }
    Student* highest = &students[0];
    for(int i = 1; i < n; i++){
        if(students[i].marks > highest->marks){
            highest = &students[i];
        }
    }
    cout << "\nStudent with Highest Marks\n";
    highest->display();
    delete[] students;
    return 0;
}