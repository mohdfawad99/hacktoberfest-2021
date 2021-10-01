#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j;
    int arr[] ={1,2,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(i = 0 ; i <n-1 ; i++){
          cout << max(arr[i], arr[i+1]) << " ";      
    }

    return 0;
}