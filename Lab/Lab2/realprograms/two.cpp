#include <iostream>
#include <string>
using namespace std;
int feetToInches();
int feetToInches(int feet);
void feetToInches(int feet, int &inch);
int main()
{
    cout << "Conversion using functions without using argument: " << feetToInches() << endl;
    int feet2;
    cout << "Enter the length in feet: ";
    cin >> feet2;
    int inches2;
    cout << "Conversion using function with one argument: " << feetToInches(feet2) << endl;
    int feet3;
    cout << "Enter the length: ";
    cin >> feet3;
    int inches3;
    feetToInches(feet3, inches3);
    cout << "Conversion using function with two argument (pass by reference): " << inches3 << endl;
    return 0;
}
int feetToInches()
{
    int feet;
    cout << "\nEnter the length in feet:";
    cin >> feet;
    return feet * 12;
}
int feetToInches(int feet)
{
    return feet * 12;
}
void feetToInches(int feet, int &inch)
{
    inch = feet * 12;
}