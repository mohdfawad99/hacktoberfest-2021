#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5};
    int n =  5;

    sort(arr,arr+n);
    
    for(int i=0 ; i<n-1 ; i+=2){
        swap(arr[i],arr[i+1]);
    }

    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}