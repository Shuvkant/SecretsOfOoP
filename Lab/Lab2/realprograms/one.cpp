#include<iostream>
#include<iomanip>
using namespace std;
struct calendar_date {
    int mm;
    int dd;
    int yy;
};

void printData(calendar_date &calendar_date){
    cout<<setw(2)<<setfill('0')<<calendar_date.mm<<"/"
    <<setw(2)<<setfill('0')<<calendar_date.dd<<"/"
    <<setw(4)<<setfill('0')<<calendar_date.yy<<"/";
}
int main(){
    calendar_date date;
    cout<<"Enter the month: ";
    cin>>date.mm;
    cout<<"Enter the day: ";
    cin>>date.dd;
    cout<<"Enter the year: ";
    cin>>date.yy;
    printData(date);
    return 0;
}