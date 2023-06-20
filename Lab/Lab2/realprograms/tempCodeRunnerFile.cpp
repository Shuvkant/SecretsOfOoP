#include <iostream>
#include <iomanip>
using namespace std;
struct calendar_date
{
    int mm;
    int dd;
    int yy;
};

void printData(calendar_date &man)
{
    cout << setw(2) << setfill('0') << man.mm << "/"
         << setw(2) << setfill('0') << man.dd << "/"
         << setw(4) << setfill('0') << man.yy << "/";
}
int main()
{
    calendar_date date;
    cout << "Enter the month: ";
    cin >> date.mm;
    cout << "Enter the day: ";
    cin >> date.dd;
    cout << "Enter the year: ";
    cin >> date.yy;
    printData(date);
    return 0;
}