//constarg.cpp
//example of use of const arguments
#include<iostream>
using namespace std;
void func(int &x,int &y );
int main(){
    int a=10, b=20;
    func(a,b);
    return 0;
}

void func(int &x, int &y){
    x=100; //error, since is constant argument
    y=200; //ok

}