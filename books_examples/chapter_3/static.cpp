//static.cpp
//for static storage class


/*The lifetime and visibility of static  variable is throughout the program and the visibility is within the scope*/

#include<iostream>
using namespace std;
void showvalue(void);
int main(){
    showvalue();
    showvalue();
    showvalue();
    showvalue();
    showvalue();
    return 0;
}

void showvalue(void){
    static int num=5;
    cout<<"\nnumber is  "<<num;
    num*=5;
}