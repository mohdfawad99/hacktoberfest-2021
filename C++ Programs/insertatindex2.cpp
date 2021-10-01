#include<iostream>
using namespace std;

int main(){
    int arr[100] , pos , i , n ,key;
    // Number of element
    cin>>n;
    // insert elements in array
    for(i=0 ; i<n ; i++){
        cin>>arr[i];
    }

    //position
    cin>>pos;
    //element to be inserted
    cin>>key;

    for ( i =n-1 ; i >= pos -1 ; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[pos-1] = key;

    //final array
    for(int i=0 ; i<=n ; i++){
        cout<<arr[i]<<" ";
    }

}