#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        int space = n - i;
        int str = (i * 2)-1;
        for(int j = 1; j <= space; j++){
            cout << " ";
        }
        for(int j = 1; j <= str; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
