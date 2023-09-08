#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double n;
    cin >> n;

    double temp = ceil(n);

    if(temp - n == 0){
        cout << "int " <<(int)n << endl;
    }
    else if(temp - n != 0)
    {
        cout << "float " <<(int)n << " " << (double)n - (int)n << endl;
    }

    return 0;
}
