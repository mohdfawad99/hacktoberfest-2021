#include <iostream>
using namespace std;

int main(){
    int i,n;
    cin>>n;
    int A[n];
    
    for(i=0;i<n;i++){
        cin>>A[i];
    }
    int N=10e6;
    bool idx[N];
    for(int j=0;j<N;j++){
        idx[j]=false;
    }
   
    for(int j=0;j<=n;j++){
        idx[A[j]]=true;
   }
    for(int j=1;j<=n;j++){ 
        if(idx[j]!=true){
            cout<<j<<" ";
            //break; //(if smallest missing is asked)
        }
    }
    return 0;
}
