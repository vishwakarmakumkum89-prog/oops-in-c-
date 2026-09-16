#include <iostream>
using namespace std;

class ResultAnalyzer;

class StudentResult
{
    int rollNo;
    string name;
    int marks[3];

    static int totalStudents;

public:
    StudentResult(int r, string n, int m1, int m2, int m3)
    {
        rollNo = r;
        name = n;
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;

        totalStudents++;
    }

    ~StudentResult()
    {
        cout << "StudentResult object destroyed for " << name << endl;
    }

    friend class ResultAnalyzer;

    static void showTotalStudents()
    {
        cout << "Total Students: " << totalStudents << endl;
    }
};

int StudentResult::totalStudents = 0;

class ResultAnalyzer
{
public:
    void analyze(StudentResult &s)
    {
        int total = s.marks[0] + s.marks[1] + s.marks[2];
        float percentage = total / 3.0;

        cout << "Roll No: " << s.rollNo << endl;
        cout << "Name: " << s.name << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;

        if (s.marks[0] >= 33 &&
            s.marks[1] >= 33 &&
            s.marks[2] >= 33)
            cout << "Result: Pass" << endl;
        else
            cout << "Result: Fail" << endl;
    }
};

int main()
{
    StudentResult s1(101, "Kumkum", 85, 90, 88);
    StudentResult s2(102, "kakul", 70, 75, 80);

    ResultAnalyzer r;

    r.analyze(s1);
    cout << endl;
    r.analyze(s2);

    cout << endl;
    StudentResult::showTotalStudents();

    return 0;
}