#include<iostream>
using namespace std;

int main()
{
    int a, b;


    while(true)
    {
        cin >> a >> b;

        if(a <= 0 || b <= 0)
        {
            break;
        }
        if(a>b)
        {
            swap(a, b);
        }
        int sum = 0;
        for(int i = a; i <= b; i++)
        {
            sum += i;
            cout << i << " ";
        }

        cout << "sum =" << sum << endl;

    }
    return 0;
}
