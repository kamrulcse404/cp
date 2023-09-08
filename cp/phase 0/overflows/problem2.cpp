

#include<iostream>
using namespace std;

int main()
{
    int a, b, c, d, result;
    cin >> a >> b;
    c = a & b;
    d = a | b;
    result = c ^ d;
    cout << result << endl;

    return 0;
}
