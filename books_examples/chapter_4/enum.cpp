// enum.cpp
// example of enumeration
#include <iostream>
using namespace std;
enum days
{
    Sun,
    Mon,
    Tue,
    Wed,
    Thu,
    Fri,
    Sat
};
int main()
{
    days d1, d2;
    d1 = Fri;
    d2 = Sun;
    if (d1 > d2)
    {
        cout << d1 << " comes before " << d2;
    }
    else
    {
        cout << d2 << " comes before " << d1;
    }
    cout << "\nTotal workig days are: " << (d1 - d2);
    return 0;
}