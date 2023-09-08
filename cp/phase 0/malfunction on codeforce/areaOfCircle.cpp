#include<iostream>
#include <iomanip>
using namespace std;

int main()
{
    double r;
    cin >> r;
    double pi = 3.141592653;
    double area = pi * r * r;
    cout << setprecision(12) << area << endl;

    return 0;
}
