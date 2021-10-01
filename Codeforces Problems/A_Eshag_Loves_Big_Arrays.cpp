#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;

    cin>>t;

    while(t--)
    {
        cin>>n;

        int a[n], avg = 0,sum = 0;

        for(int i = 0; i<n; i++)
        {
            cin>>a[i];
            sum += a[i];
        }
        avg = sum / n;

        for(int i = 0; i<n; i++)
        {
            if (a[i] > avg)
            {
                
            }
        }
        


    }
}