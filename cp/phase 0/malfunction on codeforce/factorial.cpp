
#include<iostream>
using namespace std;

int main()
{
    int n, t;

    cin >> t;

    while(t--)
    {
        long long int res = 1;
        cin >> n;
        for(int i = 1; i <= n; i++)
        {
            res *= i;
        }

        cout << res << endl;
    }

    return 0;
}
