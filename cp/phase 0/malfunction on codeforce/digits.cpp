#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int n;
    while(t--)
    {
        cin >> n;
        while(n >= 10)
        {
            int tmp = n % 10;
            cout << tmp << " ";
            n /= 10;
        }
        cout << n << endl;
    }

    return 0;
}
