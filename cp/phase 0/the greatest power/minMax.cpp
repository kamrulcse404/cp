#include<iostream>
using namespace std;

int findMin(int arr[], int n);
int findMax(int arr[], int n);

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int minNumber = findMin(arr, n);
    int maxNumber = findMax(arr, n);
    cout << minNumber << " " << maxNumber << endl;
    return 0;
}

int findMin(int arr[], int n)
{
    int minNumber = 1000000;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] < minNumber){
            minNumber = arr[i];
        }
    }
    return minNumber;
}

int findMax(int arr[], int n)
{
    int maxNumber = -1;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > maxNumber){
            maxNumber = arr[i];
        }
    }
    return maxNumber;
}
