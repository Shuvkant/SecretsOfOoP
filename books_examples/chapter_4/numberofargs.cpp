//numberofargs.cpp
//overloading by the number of arguments
#include<iostream>
using namespace std;
void display(int);
void display(int ,int);
int main(){
    int num1, num2;
    cout<<"Enter two numbers:";
    cin>>num1>>num2;
    display(num1);
    display(num1, num2);
}

void display (int num1){
    cout<<"One argument function "<<num1<<endl;
}
void display(int num1,int num2){
    cout<<"Two argument function "<<num1<<" and "<<num2<<endl;
}