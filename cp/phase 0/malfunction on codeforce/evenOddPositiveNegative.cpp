#include<iostream>

using namespace std;

int main()
{
    int n, num, p = 0, neg = 0, even = 0, odd = 0;
    cin >> n;

    while(n--)
    {
        cin >> num;
        if(num > 0)
        {
            p++;
            if(num % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        else if(num < 0)
        {
            neg++;
            if(num % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        else if(num == 0)
        {
            even++;
        }

    }

    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << p << endl;
    cout << "Negative: " << neg << endl;

    return 0;
}
