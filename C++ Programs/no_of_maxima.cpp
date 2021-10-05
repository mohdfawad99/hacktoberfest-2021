#include <iostream>
#include <climits>
using namespace std;

int main(){
    int i,n;
    cin>>n;
    int A[n+1];
    A[n]=INT_MIN;
    
    for(i=0;i<n;i++){
        cin>>A[i];
    }
    int mx=A[0];
    int maxima=0;
    for(int j=0;j<n;j++){
       
        if(mx<A[j] && A[j]>A[j+1]){
            maxima++; 
        }
        mx=max(A[j],mx);
    }
    cout << maxima;
    return 0;
}
