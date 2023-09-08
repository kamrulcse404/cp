
#include<iostream>
using namespace std;

int main()
{
    char ch;
    cin >> ch;
    if(ch >= 65 && ch <= 90)
    {
        char sm_char = ch + 32;
        cout << sm_char << endl;
    }
    else if(ch >= 97 && ch <= 122)
    {
         char sm_char = ch - 32;
        cout << sm_char << endl;
    }
    return 0;
}
