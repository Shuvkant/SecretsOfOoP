//auto.cpp
//for automatic storage class


/*The lifetime and visibility of automatic variable is only within it is declared (with in the scope)*/

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
    auto int num=5;
    cout<<"\nnumber is  "<<num;
    num*=5;
}