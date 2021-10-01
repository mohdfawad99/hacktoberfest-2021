#include <bits/stdc++.h>
using namespace std;

void leftRotateOneTime(int arr[], int n)
{
    int temp=arr[0];
    for(int i=0;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
   
}
void LeftRotateRecursion(int arr[], int k, int n)
{
    for (int i = 0; i < k; i++)
    {
        leftRotateOneTime(arr, n);
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n;
    cout << "Enter size of array:\n";
    cin >> n;
    int arr[n];
    cout << "Enter array:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cout << "Enter number of times rotate:\n";
    cin >> k;
    LeftRotateRecursion(arr, k, n);
    printArray(arr, n);
    return 0;
}