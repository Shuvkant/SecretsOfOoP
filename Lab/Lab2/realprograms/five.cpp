/*This program displays the net income of the employee 
using inlune function*/
#include<iostream>
using namespace std;
inline float salafterTax(float salary){
float  taxAmount;
taxAmount=0.1*salary;
return salary-taxAmount;
}
int main(){
    float salary;
    cout<<"Enter the salary: ";
    cin>>salary;
    float netsalary=salafterTax(salary);
    cout<<"Net payment to the employee: $"<<netsalary<<endl;
    return 0;
}