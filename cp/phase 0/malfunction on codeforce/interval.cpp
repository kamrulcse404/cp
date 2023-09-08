#include<iostream>
using namespace std;

int main()
{
    double n;

    cin >> n;

    if(n >= 0 && n <= 25.0000){
        cout << "Interval [0,25]" << endl;
    }
    else if(n > 25.00001 && n <= 50.0000000){
        cout << "Interval (25,50]" << endl;
    }
    else if(n > 50.0000000 && n <= 75){
        cout << "Interval (50,75]" << endl;
    }
    else if(n > 75 && n <= 100){
        cout << "Interval (75,100]" << endl;
    }
    else{
         cout << "Out of Intervals" << endl;
    }

    return 0;
}
