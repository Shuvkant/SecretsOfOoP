// fahrenheit to celcius and celcius to fahrenheit
#include <iostream>
#include <iomanip>
// #include <string>
using namespace std;
class fahrenheit
{
private:
    float tempInFah;
    float tempInCel;

public:
    void getdata()
    {
        float temp;
        cout << "\nEnter temperature in fahrenheit:(°F) ";
        cin >> temp;
        tempInFah = temp;
        tempInCel = (((tempInFah - 32) * 5) / 9);
    }
    void showdata()
    {
        cout << "Temperature in celcius is : " << tempInCel << " °C";
    }
};
class celcius
{
private:
    float tempInCel;
    float tempInFah;

public:
    void getdata()
    {
        float temp;
        cout << "\nEnter the temperature in Celcius (°C)";
        cin >> temp;
        tempInFah = ((9 * temp) / 5) + 32;
    }
    void showdata()
    {
        cout << "Temperature in fahrenheit is: " << tempInFah << " °F";
    }
};
int main()
{
    fahrenheit f1;
    f1.getdata();
    f1.showdata();
    celcius c1;
    c1.getdata();
    c1.showdata();
}