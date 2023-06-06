//pass by reference using pointer
// #include <iostream>
// using namespace std;
// void passValue(int *num1, int *num2);
// void passValue(int *num1, int *num2)
// {
//     int temp;
//     temp = *num1;
//     *num1 = *num2;
//     *num2 = temp;
// }
// int main()
// {
//     int num1, num2;
//     cout << "Enter two numbers:";
//     cin >> num1 >> num2;
//     cout << "Before swapping: " << endl;
//     cout << "Number1= " << num1 << "\t"
//          << "Number2= " << num2 << endl;
//     passValue(&num1, &num2);
//     cout << "After Swapping" << endl;
//     cout << "Number1= " << num1 << "\t"
//          << "Number2= " << num2 << endl;
// }



//pass by reference using address
 #include <iostream>
using namespace std;
void passValue(int &num1, int &num2);
void passValue(int &num1, int &num2)
{
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
}
int main()
{
    int num1, num2;
    cout << "Enter two numbers:";
    cin >> num1 >> num2;
    cout << "Before swapping: " << endl;
    cout << "Number1= " << num1 << "\t"
         << "Number2= " << num2 << endl;
    passValue(num1, num2);
    cout << "After Swapping" << endl;
    cout << "Number1= " << num1 << "\t"
         << "Number2= " << num2 << endl;
}