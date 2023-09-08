#include<iostream>

using namespace std;

int main()
{
    char ch;
    int n, num;

    cin >> ch >> n;

    for(int i = 1; i <= n; i++)
    {
        cin >> num;
        for(int j =1; j <= num; j++)
        {
            cout << ch;
        }
        cout << endl;
    }

    return 0;
}
