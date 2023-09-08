#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        int space = n - i;
        for(int i = 1; i <= space; i++)
        {
            cout << " ";
        }

        int star = (i * 2) - 1;
        for(int j = 1; j <= star; j++)
        {
            cout << "*" ;
        }
        cout << endl;
    }

    return 0;
}
