#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int year, month, days;

    year = n / 365;
    cout << year << " years" << endl;

    n = n - (year * 365);
    month = n / 30;
    cout << month << " months" << endl;

    days = n - (month * 30);
    cout << days << " days" << endl;

    return 0;
}
