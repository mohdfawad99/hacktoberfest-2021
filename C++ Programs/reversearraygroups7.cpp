#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int k = 3;
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0 ; i<n ; i=i+k){
        int start = i;
        int end = min(i+k-1,n-1);

        while(start <= end){
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }


    //printing an array
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}