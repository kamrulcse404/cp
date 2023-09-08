#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool ck = false;

    for(int i = 1; i <= n; i++)
    {
        if(i % 2 == 0)
        {
            ck = true;
            cout << i << endl;
        }
    }
    if(!ck)
    {
        cout << "-1" << endl;
    }
    return 0;
}
