#include<iostream>

using namespace std;

int distinct(int a[], int b[], int n)
{
    int res = 0;
    for(int i = 0; i < n; i++)
    {
        b[a[i]]++;
    }

    for(int i = 0; i < 1000001; i++)
    {
        if(b[i] > 0)
        {
            res++;
        }
    }

    return res;
}

int main()
{
    int n;

    cin >> n;

    int a[n];
    int b[1000001];

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for(int i = 0; i < 1000; i++)
    {
        b[i] = 0;
    }

    int res = distinct(a, b, n);

    cout << res << endl;

    return 0;
}
