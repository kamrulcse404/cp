#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        int sum = 0;
        for(int j = 1; j <= i; j++){
            if(j == i){
                cout << j << "=";
            }else{
                cout << j << "+";
            }
            sum += j;
        }
        cout << sum << endl;
    }
    return 0;
}
