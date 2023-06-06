// newdel.cpp
// to find sum and average
#include <iostream>
using namespace std;
int main()
{
    int n, i, *arr, tot = 0;
    float avg;
    cout << "How many numbers ";
    cin >> n;
    // allocate memory for array
    arr = new int[n];
    cout << "Enter elements: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < n; i++)
    {
        tot += arr[i];
    }
    avg = static_cast<float>(tot) / n;
    cout << "Total = " << tot << endl;
    cout << "Average = " << avg;
    delete arr;
    return 0;
}