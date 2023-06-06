#include <iostream>
// #include<iomanip>
using namespace std;
int max(int, int);
long max(long, long);
float max(float, float);
char max(char, char);
int main()
{
    int i1 = 12, i2 = 34;
    cout << "Greater is " << max(i1, i2) << endl;
    long l1 = 3433, l2 = 34343;
    cout << "Grater is " << max(l1, l2) << endl;
    float f1 = 343.343, f2 = 342.32;
    cout << "Grater is " << max(f1, f2) << endl;
    char c1 = 'a', c2 = 'A';
    cout << "Grater is " << max(c1, c2) << endl;
    return 0;
}
int max(int a, int b)
{
    return (a > b ? a : b);
}
long max(long l1, long l2)
{
    return (l1 > l2 ? l1 : l2);
}
float max(float f1, float f2)
{
    return (f1 > f2 ? f1 : f2);
}

char max(char c1, char c2)
{
    return (c1 > c2 ? c1 : c2);
}