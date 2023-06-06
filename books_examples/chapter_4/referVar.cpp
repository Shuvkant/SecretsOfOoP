#include <iostream>
using namespace std;
int main()
{
    int num = 9;
    int &nump = num;
    cout << "num= " << num << endl;
    cout << "nump= " << nump << endl;
    nump = 7;
    cout<<"num after changing nump= "<<num<<endl;
    num=21;
    cout<<"nump after changing num= "<<nump;
}