#include<iostream>
using namespace std;

int main()
{

    long long int a, b, c, d;
    cin >> a >> b >> c >> d;
    long long int left = 1;
    for(long long int i = 1; i <= b; i++)
    {
        left *= a;
    }

    long long int right = 1;
    for(long long int i = 1; i <= d; i++)
    {
        right *= c;
    }

    if(left > right)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
