#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a = 0, b = 1, temp;

    if(n == 1){
        cout << a << endl;
    }
    else if(n == 2)
    {
        cout << a << " " << b << endl;
    }
    else
    {
        cout << a << " " << b << " ";
        for(int i = 3; i <= n; i++)
        {
            temp = a + b;
            if(i != n)
            {
                cout << temp << " ";
            }
            else
            {
                cout << temp << endl;
            }
            a = b;
            b = temp;
        }
    }

    return 0;
}
