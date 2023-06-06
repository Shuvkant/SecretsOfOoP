#include <iostream>
#include<string>
using namespace std;
int main()
{
    string name;
    int roll;
    char address[20];
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your roll no: ";
    cin >> roll;
    cout << "Enter your address ";
    cin >> address;
    cout<<endl<<endl;
    cout << "Your details" << endl;
    cout<<"Your name is "<<name<<endl;
    cout<<"Your roll no is "<<roll<<endl;
    cout<<"Your address is "<<address<<endl;
    return 0;
}