#include<iostream>
#include <cstring>
using namespace std;

int main()
{
    char f1[100000];
    char s1[100000];
    char f2[100000];
    char s2[100000];


    int temp;
    cin >> f1 >> s1;
    cin >> f2 >> s2;

    int s1_len = strlen(s1);
    int s2_len = strlen(s2);

    bool ck = true;

    if(s1_len == s2_len)
    {
        for(int i = 0; s1[i] != '\0'; i++)
        {
            if(s1[i] != s2[i])
            {

                ck = false;
                break;

            }
        }
        if(ck)
        {
            cout << "ARE Brothers" << endl;
        }
        else
        {
            cout << "NOT" << endl;
        }
    }
    else
    {
        cout << "NOT" << endl;
    }


    return 0;
}
