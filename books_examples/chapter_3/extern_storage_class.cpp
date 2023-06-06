//extern.cpp
// for external variable
#include<iostream>
using namespace std;
int a=2, b=2, c=3;
int add(void);
int main(){
    cout<<add(); //displays 12
    cout<<"\na="<<a<<"\tb="<<b<<"\tc="<<c;  //a=4, b=2, c=3
    return 0;
}

int add(void){
    extern int a ;
    int b, c;
    a=b=c=4;
    return (a+b+c);
}


/*When the function add() is called two local variable b and c are created, and both are asigned value 4. But the global variable 'a' is changed to 4 as well. In function add() global variable b and c are unaltered by a=b=c=4 statement . The value of a is changed but value of 'b' and 'c' remains unchanged*/