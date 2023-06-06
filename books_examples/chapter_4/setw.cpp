//illustrates setw manipulators.cpp
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    long pop1=3434344, pop2=34343434, pop3=232322;
    cout<<setw(8)<<"Location"<<setw(12)<<"Population"<<endl;
    cout<<setw(8)<<"Patan"<<setw(12)<<pop1<<endl;
    cout<<setw(8)<<"khotang"<<setw(12)<<pop2<<endl;
    cout<<setw(8)<<"butwal"<<setw(12)<<pop3<<endl;

}