#include <iostream>
using namespace std;
void display(char name[]);
void display(int);
int main()
{
    char name[40];
    cout << "Enter your name: " << endl;
    cin >> name;

    int roll;
    cout << "Enter your roll number:";
    cin >> roll;
    display(name);
    display(roll);
}
void display(char name[])
{
    cout << "Your name is " << name << endl;
}
void display(int roll)
{
    cout << "Your roll no is :" << roll << endl;
}