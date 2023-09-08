#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long int product = (long long int)n * n * n;
    int result = product % 100;
    cout << result << endl;
    return 0;
}
