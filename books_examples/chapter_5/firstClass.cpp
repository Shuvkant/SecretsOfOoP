// firstClass.cpp
#include <iostream>
using namespace std;
class sample
{
private:
    int data1;
    int data2;

public:
    void setdata(int d1, int d2)
    {
        data1 = d1;
        data2 = d2;
    }
    void showdata()
    {
        cout << "\nData1= " << data1 << endl;
        cout << "data2= " <<data2<<endl;
    }
};
int main(){
    sample s1, s2;
    s1.setdata(101, 102);
    s2.setdata(201, 202);
    s1.showdata();
    s2.showdata();
    return 0;
}