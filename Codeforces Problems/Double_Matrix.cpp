
#include <bits/stdc++.h>
using namespace std;


void solve() {
    int n,m;
    cin>>n>>m;
    vector<vector<int>> a(n, vector<int>(m));

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    int no;
    vector<vector<int>> b(n, vector<int>(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>b[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j] < b[i][j]) swap(a[i][j] , b[i][j]);
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=1;j<m;j++)
        {
            if(a[i][j]<= a[i][j-1])
            {
                cout<<"Impossible";
                return;
            }
        }
    }
    for(int j=0;j<m;j++)
    {
        for(int i=1;i<n;i++)
        {
            if(a[i][j]<= a[i-1][j])
            {
                cout<<"Impossible";
                return;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<m;j++)
        {
            if(b[i][j]<=b[i][j-1])
            {
                cout<<"Impossible";
                return;
            }
        }
    }
    for(int j=0;j<m;j++)
    {
        for(int i=1;i<n;i++)
        {
            if(b[i][j]<= b[i-1][j])
            {
                cout<<"Impossible";
                return;
            }
        }
    }

    cout<<"Possible";
}

signed main() {
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
