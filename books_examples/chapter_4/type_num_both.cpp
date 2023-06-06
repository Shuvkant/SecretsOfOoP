// type_num_both.cpp
// Overloading by the both type and number of arguments
#include <iostream>
#include <iomanip>
using namespace std;
void display(char);
void display(int);
void display(char, int);
void display(int, int);
int main()
{
    char ch = 'a';
    int inum = 25, n = 7;
    cout << "Character function: ";
    display(ch);
    cout << "Integer function: ";
    display(inum);
    cout << "character and integer function:";
    display('*', 10);
    cout << "Two integer function: ";
    display(inum, n);
    system("pause");
    return 0;
}

void display(char ch){
    for(int i=0; i<5; i++){
        cout<<setw(2)<<ch;
        cout<<endl;
    }
}

void display(int number){
    for(int i=0; i<5; i++){
        cout<<setw(4)<<number*(i+1);
        cout<<endl;
    }
}

void display( char character, int n){
    for(int i=0; i<n;i++){
        cout<<setw(2)<<character;
        cout<<endl;

    }
}

void display(int num1, int num2){
    for(int i=0; i<num2; i++){
        cout<<setw(4)<<num1*(i+1);
        cout<<endl;
    }
}