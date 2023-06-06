#include<limits>
#include<iostream>
using namespace std;
int main(){
    cout<<"largest float="<<numeric_limits<float>::max()<<endl;
    cout<<"Char is signed="<<numeric_limits<char>::is_signed<<endl;
    cout<<"largest int="<<numeric_limits<int>::max()<<endl;
    cout<<"largest int="<<numeric_limits<int>::min()<<endl;
}