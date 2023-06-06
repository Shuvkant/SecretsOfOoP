//An example of recursion
#include<iostream>
int factorial(int n);
using namespace std;
int main(){
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    cout<<"The factorial of "<<n<<" is: "<<factorial(n);
}
int factorial(int n){
    if(n<=1){
        return (1);
    }
    else
    {
        return(n*factorial(n-1));
    }
}