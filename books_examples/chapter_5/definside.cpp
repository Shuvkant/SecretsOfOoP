// definside.cpp
// definition inside the class
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class student
{
private:
    int roll;
    char  name[50]; /*using char array*/
    // string name; /*using string */
    char phone[10];

public:
    void getdata()
    {
        cout << "Enter your Roll No: ";
        cin >> roll;
        //ignore the newline character in the input buffer
        cin.ignore();
        cout << "Enter Name: ";
        cin.getline(name, 50);  /*used while storing data in char name*/
        // getline(cin, name);  /*used while storing data in string name */
        cout << "Enter your phone number: ";
        cin >> phone;
        cout << endl;
    }
    void showdata()
    {
        cout << setw(14)<<left << "Name: " << name << endl;
        cout << setw(14)<<left << "Roll No: " << roll << endl;
        cout << setw(14)<<left << "Phone Number: " << phone << endl
             << endl;
    }
}; // end of class
int main()
{
    student s1, s2;
    s1.getdata();
    s2.getdata();
    cout << "Data of first student " << endl;
    s1.showdata();
    cout << "Data of second student " << endl;
    s2.showdata();
    return 0;
}
