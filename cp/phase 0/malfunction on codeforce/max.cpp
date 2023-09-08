#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int max_num = -1;
    int num;
    while(n--)
    {
        cin >> num;
        if(max_num <= num)
        {
            max_num = num;
        }
    }
    cout << max_num << endl;
    return 0;
}
