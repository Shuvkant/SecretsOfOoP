#include <iostream>
#include <iomanip>

using namespace std;

struct Officer
{
    string designation;
    int salary;
    int increment;
};

float calculateNewSalary(const Officer &officer)
{
    float newSalary = ((100 + officer.increment) / 100.0) * officer.salary;
    return newSalary;
}

int main()
{
    Officer ceo = {"Chief Executive Officer", 35000, 9};
    Officer infoOfficer = {"Information Officer", 25000, 10};
    Officer sysAnalyst = {"System Analyst", 24000, 12};
    Officer programmer = {"Programmer", 18000, 12};

    float newSal1 = calculateNewSalary(ceo);
    cout << setw(24) << ceo.designation << ": Rs." << setw(5) << newSal1 << endl;

    float newSal2 = calculateNewSalary(infoOfficer);
    cout << setw(24) << infoOfficer.designation << ": Rs." << setw(5) << newSal2 << endl;

    float newSal3 = calculateNewSalary(sysAnalyst);
    cout << setw(24) << sysAnalyst.designation << ": Rs." << setw(5) << newSal3 << endl;

    float newSal4 = calculateNewSalary(programmer);
    cout << setw(24) << programmer.designation << ": Rs." << setw(5) << newSal4 << endl;

    return 0;
}
