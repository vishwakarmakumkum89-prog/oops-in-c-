#include <iostream>
using namespace std;

class Patient
{
    int patientId;
    string patientName;

    static int activePatients;

public:
    Patient(int id, string name)
    {
        patientId = id;
        patientName = name;
        activePatients++;
    }

    ~Patient()
    {
        activePatients--;
    }

    static void showActivePatients()
    {
        cout << "Active Patients: " << activePatients << endl;
    }
};

int Patient::activePatients = 0;

int main()
{
    Patient::showActivePatients();

    {
        Patient p1(101, "Aman");
        Patient p2(102, "Riya");

        Patient::showActivePatients();
    }

    Patient::showActivePatients();

    return 0;
} 