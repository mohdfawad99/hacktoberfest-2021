#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n+1] , i , key;
    for(i=0 ; i<n ;i++){
        cin>>arr[i];
    }
    cin>>key;
    arr[i] = key;

    for(i = 0 ; i<=n ; i++){
        cout<<arr[i]<<" "; 
    }
    return 0;
}