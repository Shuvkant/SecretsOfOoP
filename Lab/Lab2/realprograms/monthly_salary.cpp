// This program gives the current salary of the officers after increment*/
#include <iostream>
#include <iomanip>
using namespace std;
float salaryAfterincrement(int salary, int increment);
int main()
{
    int salary1 = 35000, salary2 = 25000, salary3 = 24000, salary4 = 18000;
    int increment1 = 9, increment2 = 10, increment3 = 12, increment4 = 12;
    float newsal = salaryAfterincrement(salary1, increment1);
    cout << setw(24) << "Chief Exscutive Officer:"
         << " Rs." << setw(5) << newsal << endl;
    float newsal2 = salaryAfterincrement(salary2, increment2);
    cout << setw(24) << "Information Officer:"
         << " Rs." << setw(5) << newsal2 << endl;
    float newsal3 = salaryAfterincrement(salary3, increment3);
    cout << setw(24) << "System Analyst:"
         << " Rs." << setw(5) << newsal3 << endl;
    float newsal4 = salaryAfterincrement(salary4, increment4);
    cout << setw(24) << "Programmer:"
         << " Rs." << setw(5) << newsal4 << endl;
}
float salaryAfterincrement(int salary, int increment)
{
    float newSalary;
    newSalary = ((100 + increment) / 100.0) * salary;
    return newSalary;
}