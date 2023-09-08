#include<iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    if(a>b){
        swap(a, b);
    }
     //cout << a << " " << b << endl;

    while(b % a != 0)
    {
        int tmp = b % a;
        b = a;
        a = tmp;

        //cout << a << " " << b << endl;

    }
    cout << a << endl;

    return 0;
}
