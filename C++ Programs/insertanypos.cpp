#include<iostream>
using namespace std;

int main(){
    int array[100], pos , size , value;
    cout<<"Enter number of elements of array";
    cin>>size;
    cout<<"Enter elements in array";
    for(int i=0 ; i<size ; i++){
        cin>>array[i];
    }
    cout<<"Enter the location where you wish to insert an element";
    cin>>pos;
    cout<<"Enter the value to insert";
    cin>>value;
    for(int i=size-1 ; i >= pos ; i--){
        array[i+1] = array[i];
    }
    array[pos-1] = value;
    cout<<"Resultant array is \n";
    for(int i=0 ; i<= size ; i++){
        cout<<array[i]<<" ";
    }
    return 0;
}