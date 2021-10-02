#include <bits/stdc++.h>
using namespace std;
#define pb push_back
/*
  Question -- Input two large numbers, A and B, and output their sum.
  0 ≤ A, B < 10^100
 */
int main()
{
    string s,t;
    cin>>s>>t;
    deque<int> ans;
    deque<int> a;
    deque<int> b;
    if(s.size()>t.size())
    {
        for(int i=1;i<=s.size()-t.size();i++)
        {
            b.pb(0);
        }
    }
    else
    {
        for(int i=1;i<=t.size()-s.size();i++)
        {
            a.pb(0);
        }
    }
    for(char ab : s)
    {
        a.pb(ab - '0');
    }
    for(char ab : t)
    {
        b.pb(ab - '0');
    }

    for(int i= a.size()-1;i>=0;i--)
    {
        int sum=a[i]+b[i];
        if(!i) ans.push_front(sum);
        else ans.push_front(sum%10);
        int x = sum/10;
        if(i)
        {
            a[i-1]+= x;
        }
    }
    for(int i : ans)
    {
        cout<<i;
    }
    return 0;
}