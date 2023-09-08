
#include<iostream>
using namespace std;

int main()
{
    int a, b, i = 1;
    cin >> a >> b;
    int product = 1;
    while(i <= b){
        product *= a;
        i++;
    }
    cout << product << endl;
    return 0;
}
