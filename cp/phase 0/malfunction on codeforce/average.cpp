#include<iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin >> n;

    double a[n], sum = 0.0;

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    cout << fixed;
    cout << setprecision(7) << sum / n << endl;

    return 0;
}
