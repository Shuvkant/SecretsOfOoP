#include<iostream>
using namespace std;
 namespace firstname{
    void func(){
        cout<<"I'm Shuvkant ";
    }
}

namespace lastname{
    void func(){
        cout<<"Chaudhary";
    }
}
int main(){
    firstname::func();
    lastname::func();
}