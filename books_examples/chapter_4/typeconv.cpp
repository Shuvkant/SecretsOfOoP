//typeconv.cpp 
//type conversion using static_cast operator
#include<iostream>
using namespace std;
int main(){
    float quot;
    int num1=7, num2=9;
    quot =num1/num2;
    cout<<"Without casting :quot= "<<quot<<endl;
    //wrong result displays 0
    quot=static_cast<float>(num1)/(num2);
    cout<<"After casting: quot= "<<quot<<endl;  //right answer
    return 0;
}
