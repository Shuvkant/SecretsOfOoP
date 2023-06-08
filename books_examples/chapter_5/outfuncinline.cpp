// outfuncinline.cpp
// definition outside the class
#include <iostream>
#include <iomanip>
using namespace std;
class student
{
private:
    int roll;
    char name[30];
    char phone[20];

public:
    void getdata(); /*function declaration*/
    void showdata();
};
inline void student ::getdata() /*function definition */
{
    cout << "\nEner Roll No: ";
    cin >> roll;
    cin.ignore();
    cout << "Enter your name ";
    cin.getline(name, 30);
    cout << "Enter your phone number: ";
    cin >> phone;
}
inline void student::showdata()
{
    cout << setw(14) << left << "Name: " << name << endl;
    cout << setw(14) << left << "Roll No: " << roll << endl;
    cout << setw(14) << left << "Phone Number: " << phone << endl;
}
int main()
{
    student s1, s2;
    s1.getdata();
    s2.getdata();
    cout << endl;
    cout << "First student: " << endl;
    s1.showdata();
    cout << endl;
    cout << "Second Student: " << endl;
    s2.showdata();
    return 0;
}