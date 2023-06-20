#include <iostream>
#include <iomanip>
using namespace std;
struct date
{
    int dd, mm, yy;
};
struct mahhelp{

};
void printdate(date &man);
int main()
{
    date d1;
    /*d1.dd = 23;
    d1.mm = 10;
    d1.yy = 2059;*/
    cout<<"Enter month: ";
    cin>>d1.mm;
    cout<<"Enter day: ";
    cin>>d1.dd;
    cout<<"Enter year: ";
    cin>>d1.yy;
    printdate(d1);
    // cout<<&d1<<endl;
    return 0;
}
void printdate(date &man)
{
    cout << setfill('0')<<setw(2) << man.mm << "/";
    cout << setfill('0')<<setw(2)  << man.dd << "/";
    cout << setfill('0')<<setw(4)  << man.yy << endl;
    // cout<<&man<<endl;
}