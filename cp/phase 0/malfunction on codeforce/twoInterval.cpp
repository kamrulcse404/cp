
#include<iostream>

using namespace std;

int main()
{
    int left_one, right_one, left_two, right_two;

    cin >> left_one >> right_one >> left_two >> right_two;

    if(left_one == left_two && right_two > right_one)
    {
        cout << left_two << " " << right_one << endl;
    }
    else if(left_one == left_two && right_two < right_one)
    {
        cout << left_two << " " << right_one << endl;
    }
    else if((left_two > left_one && left_two < right_one))
    {
        if(right_two > right_one)
        {
            cout << left_two << " " << right_one << endl;
        }
    }
    else if((left_two > left_one && left_two < right_one))
    {
        if(right_two < right_one)
        {
            cout << left_two << " " << right_two << endl;
        }
    }
    else{
        cout << "-1" << endl;
    }

    return 0;
}
