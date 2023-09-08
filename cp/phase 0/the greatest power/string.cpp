#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char s[20];
    cin >> s;
    int len = strlen(s);
    int i;
    for(i = 0; i < len - 1; i++)
    {
        s[i] = s[i+1];
    }
    s[i] = '\0';
    //for(i = 0; s[i] != '\0'; i++){
        //cout << s[i];
    //}
    cout << s << endl;

    return 0;
}
