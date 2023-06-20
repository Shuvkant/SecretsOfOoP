#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
struct date{
    int yy;
};
void showdateEntered(date &man){
    cout<<"You entered: "<<man.yy<<endl;
}
void convertDate(date &man){
    man.yy+=57;
    cout<<"Date in B.S. is "<<man.yy<<endl;
}
int main()
{
    date d1;
    cout<<"Enter the date: ";
    cin>>d1.yy;
    showdateEntered(d1);
    convertDate(d1);

return 0;
}
