//link to problem : https://codeforces.com/problemset/problem/1498/B

#include <bits/stdc++.h>
 
using namespace std;
 
int nextsuitable(long int e[],long int h){
 
      for(int n=20;n>=0;n--){
            if(e[n]>0){
        if(pow(2,n)<=h){
            return n;
        }
        }
 
       }
 
       return -1;
}
int main()
{
    int a;
    cin>>a;
    for(int b=0;b<a;b++){
       long int c,d;
       cin>>c>>d;
       long int e[21];
       for(int y=0;y<21;y++){
        e[y]=0;
       }
       for(int i=0;i<c;i++){
        long int j;
        cin>>j;
 
        for(int l=0;l<21;l++ ){
            if(pow(2,l)==j){
                e[l]++;
            }
        }
 
       }
 
       /* for(int n=0;n<21;n++){
            cout<<e[n]<<" ";
        }*/
 
       long int ans=0;
       long int width=d;
       for(int n=20;n>=0;n--){
             long int z;
       while(e[n]>0){
 
            z=pow(2,n);
            width=width-z;
 
            if(width<0){
                width=d;
                ans++;
            }
 
            else if(width==0){
                e[n]--;
                ans++;
                width=d;
            }
 
 
            else{
            e[n]--;
            while(width!=d){
 
            long int k=nextsuitable(e,width);
 
            if(k>=0){
 
            e[k]--;
            long int y=pow(2,k);
            width=width-y;
            if(width==0){
                ans++;
 
                width=d;
            }
 
            }
            else{
                ans++;
 
                width=d;
 
            }
            }
            }
       }
 
       }
 
 
      cout<<ans<<endl;
 
 
    }
}