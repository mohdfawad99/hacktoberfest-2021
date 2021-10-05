#include <iostream>
#include <climits>
using namespace std;

int main(){
    int i,n,MX=INT_MIN;
    cin>>n;
    int A[n];
    
    for(i=0;i<n;i++){
        cin>>A[i];
        cout<<"A["<<i<<"] = "<<A[i]<<endl;
    }
    for(int k=0;k<n;k++){
        MX=max(MX,A[k]);
        cout<<MX<<endl;
    }
    return 0;
}