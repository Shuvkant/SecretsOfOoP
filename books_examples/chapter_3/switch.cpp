#include<iostream>
#include<string>
using namespace std;
int main(){
    int fruit;
    cout<<"Choose any of the following fruits:"<<endl;
    cout<<"1.Apple"<<endl;
    cout<<"2.Orange"<<endl;
    cout<<"3.Grapes:"<<endl;
    cout<<"Enter the fruit code:";
    cin>>fruit;
    cout<<"The fruit is ";
    switch(fruit){
        case 1 :
        cout<<"Apple";
        break;

        case 2 :
        cout<<"Orange";
        break;

        case 3:
        cout<<"Grapes";
        break;
        default:
        cout<<"Fruit is not in the list:";
    }
system("pause");
return 0;
}
