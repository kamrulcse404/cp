#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    bool ck = true;

    for(int i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            ck = false;
        }
    }

    if(ck)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
