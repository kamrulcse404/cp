#include<iostream>

using namespace std;

void print(int a[], int b[], int c[], int n)
{
    for(int i = 0; i < n; i++)
    {
        c[i] = b[i];
        //c[n+i] = a[i];
    }

    for(int i = 0; i < n; i++)
    {
        c[i+n] = a[i];
        //c[n+i] = a[i];
    }

    for(int i = 0; i < n*2; i++)
    {
        if(i != (n*2)-1)
        {
            cout << c[i] << " ";
        }
        else
        {
            cout << c[i] << endl;
        }
    }
}

int main()
{
    int n;
    cin >> n;

    int a[n];
    int b[n];
    int c[n+n];

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    print(a, b, c, n);

    return 0;
}
