#include<iostream>
using namespace std;

int main(){
    int first[3][3]={9,6,1,144,70,50,10,12,78};
    int i, j;
    for(i=0 ; i<3 ; i++){
        for(j=0 ; j<3 ; j++){
            cout<<first[i][j]<<" ";
        }
        cout<<"\n";
    }
}