#include<iostream>
using namespace std;

int main(){
    int array[10], i , value;

    cout<<"Enter 5 elements\n";
    for(i = 0 ; i<5 ; i++){ 
        cin>>array[i];
    }

    cin>>value;

    cout<<i;
    array[i] = value;

    for(i=0 ; i<=5 ; i++){
        cout<<array[i]<<" ";
    }
}