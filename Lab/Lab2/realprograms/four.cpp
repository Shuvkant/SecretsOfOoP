/*This program accepts two temperature values and sets the highest value to
the temperature provided by the user*/
#include<iostream>
int &max(int &temp1, int &temp2);
int &max(int &temp1, int &temp2){
    if(temp1>temp2){
        return temp1;
    }
    else{
        return temp2;
    }
}
using namespace std;
int main(){
    int temp1, temp2;
    cout<<"Enter two temperatures: ";
    cin>>temp1>>temp2;
    cout<<"Before calling: "<<endl;
    cout<<"temp1= "<<temp1<<"\t temp2= "<<temp2<<endl<<endl;
    max(temp1, temp2)=50;
    cout<<"After calling: "<<endl;
    cout<<"temp1= "<<temp1<<"\t temp2= "<<temp2<<endl<<endl;
    return 0;
}

