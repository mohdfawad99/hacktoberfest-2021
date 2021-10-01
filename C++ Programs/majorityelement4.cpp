#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void majority(int arr[] , int n ){
    unordered_map<int, int >m;
    for(int i=0 ; i<n ; i++){
        m[arr[i]]++;
    }
    int flag = 0;

    for(auto i : m){
        if(i.second > n/2 ){
            flag=1;
            cout<<i.first<<"\n"<<i.second<<endl;
            break;
        } 
    }

}

int main(){
    int arr[] = {2,3,5,2,2,4,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<n<<endl;
    cout<<n/2<<endl;
    majority(arr,n);
    return 0;
}