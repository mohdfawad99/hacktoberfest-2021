#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={1,1,2,2,2};
    int n =  5;

 unordered_map<int, int> mp;
    // Traverse through array elements and 
// count frequencies 
for (int i = 0; i < n; i++) 
    mp[arr[i]]++; 

// Traverse through map and print frequencies 
for (auto x : mp) 
    cout << x.first << " " << x.second << endl; 
// found the most frequent item.
 int max_count = 0, res = -1; 
for (auto i : mp) { 
    if (max_count < i.second) { 
        res = i.first; 
        max_count = i.second; 
    } 
} 

cout<<max_count;

    return 0;
}