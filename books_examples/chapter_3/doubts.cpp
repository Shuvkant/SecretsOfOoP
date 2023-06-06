#include<iostream>
#include<string>
void multiplication(int number);
using namespace std;
int main(){
    int number1;
    cout<<"Enter any number:";
    cin>>number1;
    multiplication(number1);
    return 0;
}

void multiplication(int number){
    for(int i=1; i<+10; i++){
        cout<<number<<"*"<<i<<"="<<number*i<<endl;
    }
}