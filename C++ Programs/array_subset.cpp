//link : https://practice.geeksforgeeks.org/problems/array-subset-of-another-array2317/1

//problem statement : Given two arrays: a1[0..n-1] of size n and a2[0..m-1] of size m. 
//					Task is to check whether a2[] is a subset of a1[] or not. 
//					Both the arrays can be sorted or unsorted. It may be assumed that elements in both array are distinct.

//Input:
//	a1[] = {11, 1, 13, 21, 3, 7}
//	a2[] = {11, 3, 7, 1}
//Output:
//	Yes
//Explanation:
//	a2[] is a subset of a1[]


#include <bits/stdc++.h>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m) ;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        int a1[n], a2[m];

        for (int i = 0; i < n; i++) {
            cin >> a1[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> a2[i];
        }

        cout << isSubset(a1, a2, n, m) << endl;
    }
    return 0;
}
string isSubset(int a1[], int a2[], int n, int m) {

    unordered_map<int,int> mp1;
    unordered_map<int,int> mp2;
    
    for(int i=0;i<n;i++){
        mp1[a1[i]]++;
    }
    for(int i=0;i<m;i++){
        mp2[a2[i]]++;
    }
    
    for(auto it:mp2){
        if(mp1.find(it.first)==mp1.end()){
            return "No";
        }
        else{
            if(mp2[it.first]!=it.second){
                return "No";
            }
        }
    }
    
    return "Yes";
}
