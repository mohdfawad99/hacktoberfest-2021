#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int ar[]={1,1,1,2,3,3,5,5,8,8,8,9,9,10};
    int n = sizeof(ar) / sizeof(ar[0]);

    unordered_map<int , int > mp;

    for(int i=0 ; i< n ; i++){
        mp[ar[i]]++;
    }

    for(auto x: mp ){
        cout<<"Value is "<<x.first<<" "<<x.second<<"\n";
    }

}