#include<iostream>
using namespace std;

void fun_swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b;
    cin >> a >> b;
    fun_swap(&a, &b);
    cout << a << " " << b << endl;
    return 0;
}
