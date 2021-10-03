#include <iostream>
using namespace std;

int main(){
    int i,n;
    cin>>n;
    int A[n];
    
    for(i=0;i<n;i++){
        cin>>A[i];
    }
    int s;
    cin >> s;
   /* int a=0;
    for(int j=0;j<n;j++){ // time complexity of this logig is O(n^2)
        int sum=0;
        for(int k=j;k<n;k++){
            sum+=A[k];
            if(sum==s){
                a++;
                cout <<endl<< j <<" "<<k <<endl;
            }
        }
    }
    cout << a;
*/
    // time complexity of this logic is O(n)
    int sum2 = 0;
    int k=0,j=0,st,en;
    while(j<n && sum2+A[j]<=s){
        sum2+=A[j];
        j++;
    }
    if(sum2==s){
        cout<<k+1<<" "<<j<<endl;
        return 0;
    }
    while(j<n){
        sum2+=A[j];
        while(sum2>s){
            sum2-=A[k];
            k++;
        }
        if(sum2==s){
            st=k+1;
            en=j+1;
            break;
        }
        j++;
    }
    cout<<st<<" "<<en<<endl;
    return 0;
}