#include<iostream>

using namespace std;

int main()
{
    int correct = 1999;
    int n;
    while(true)
    {
        cin >> n;
        if(n != correct)
        {
            cout << "Wrong" << endl;
        }
        else
        {
            cout << "Correct" << endl;
            break;
        }

    }

    return 0;
}
