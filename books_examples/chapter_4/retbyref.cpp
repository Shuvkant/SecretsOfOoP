// retbyref.cpp
// example of return by reference
#include <iostream>
using namespace std;
int &max(int &x, int &y)
{
    if (x > y)
    {

        return x; // return reference
    }
    else
    {
        return y;
    }
}
int main()
{
    int num1,num2;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
    cout << "\nBefore Calling num1= " <<num1 << " and num2= " << num2;
    max(num1, num2)=90; // legal statement
    cout << "\nAfter calling num1= " <<num1 << " and num2 = " <<num2;
    return 0;
}