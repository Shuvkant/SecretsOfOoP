//ref_var.cpp
//An example of reference
#include<iostream>
using namespace std;
int main(){
    int x=5;
    int &y=x;  //y is  alias of x
    cout<<"x= " <<x<<" and y= "<<y<<endl; //same output
    y++;
    cout<<"x= " <<x<<" and y= "<<y<<endl; //same output
    return 0;
}