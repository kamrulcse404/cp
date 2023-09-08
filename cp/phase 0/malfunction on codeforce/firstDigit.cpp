
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if(n > 999 && n <= 9999)
    {
        while(n >= 10)
        {
            n /= 10;
        }

        if(n % 2 == 0)
        {
            cout << "EVEN" << endl;
        }
        else
        {
            cout << "ODD" << endl;
        }
    }

    return 0;
}
