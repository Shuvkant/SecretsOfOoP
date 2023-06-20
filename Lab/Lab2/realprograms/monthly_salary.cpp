// This program gives the current salary of the officers after increment
#include <iostream>
#include <iomanip>
using namespace std;
float salaryAfterincrement(float  salary, float increment);
int main()
{
     int ceo = 35000, infoOfficer = 25000, SyAna = 24000, programmer = 18000;
     int incrementCEO = 9, incrementIO = 10, incrementSyAna = 12, incrementPro = 12;
     cout << setw(24) << "Chief Exscutive Officer:"
          << " Rs." << setw(5) << salaryAfterincrement(ceo, incrementCEO) << endl;
     cout << setw(24) << "Information Officer:"
          << " Rs." << setw(5) << salaryAfterincrement(infoOfficer, incrementIO) << endl;
     cout << setw(24) << "System Analyst:"
          << " Rs." << setw(5) << salaryAfterincrement(SyAna, incrementSyAna) << endl;
     cout << setw(24) << "Programmer:"
          << " Rs." << setw(5) << salaryAfterincrement(programmer, incrementPro) << endl;
}
float salaryAfterincrement(float  salary, float increment)
{
     float newSalary;
     newSalary = ((100 + increment) / 100.0) * salary;
     return newSalary;
}