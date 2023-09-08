
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int row = 1; row <= n; row++){
        int space = n - row;
        for(int j = 1; j <= space; j++){
            cout << " ";
        }
        int star = row * 2 -1;
        for(int j = 1; j <= star; j++){
            cout << "*";
        }
        cout << endl;
    }
    for(int row = n-1; row >= 1; row--)
    {
        int space = n - row;
        for(int j = 1; j <= space; j++){
            cout << " ";
        }
        int star = row * 2 -1;
        for(int j = 1; j <= star; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
