#include<iostream>
using namespace std;

int main()
{
    int n, max_num = -11;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] > max_num){
            max_num = a[i];
        }
    }
    cout << max_num;
    return 0;
}
