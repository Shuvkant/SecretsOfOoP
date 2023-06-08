// bojasphyobj.cpp
// c++ objects as physical objects
#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;
class product
{
private:
    int productid;
    char name[15];
    float cost;

public:
    void setdata(int pid, const char pname[], float cst)
    {
        productid = pid;
        strcpy(name, pname);
        cost = cst;
    }
    void showdata()
    {
        cout << setw(11) << "Product ID: " << productid << endl;
        cout << setw(11) << "Name: " << name << endl;
        cout << setw(11) << "Cost: " << cost << endl;
    }
};
int main()
{
    product p1, p2;
    p1.setdata(944, "CD-ROM ", 1500.00);
    p2.setdata(945, "Pen Drive ", 1000.00);
    p1.showdata();
    p2.showdata();
    return 0;
}
