#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {3,5,2,1,7,8};
    int n = 6;
    
    int sum=0;
    for(int i=0 ; i <n ;i++){
        sum += arr[i];
    }
    double mean = (double)sum / (double)n;
    cout<<mean<<"\n";

    double median;
    sort(arr,arr+n);
    if(n%2 !=0 ){
        median = arr[n/2];
    } else {
        median = (double)(arr[(n-1)/2] + arr[n/2])/2.0;
    }

    cout<<median<<"\n ";
}
