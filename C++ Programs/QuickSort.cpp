#include <bits/stdc++.h>

using namespace std;

int partition(int arr[], int start, int end){
     int pivot=arr[end];
     int partindex=start;

     for(int i=start;i<end;i++){
         if(arr[i]<=pivot){
            swap(arr[i],arr[partindex]);
            partindex+=1;
         }
     }

     swap(arr[partindex],arr[end]);

     return partindex;

}


void QuickSort(int arr[], int start, int end){
    if(start<end){
        int partIndex=partition(arr,start,end);
        QuickSort(arr,start,partIndex-1);
        QuickSort(arr, partIndex+1,end);
    }

    return;
}



int main(){

    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    QuickSort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}