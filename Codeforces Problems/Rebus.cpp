#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    string number;
    int plus_count = 1;
    int minus_count = 0;
    for (char a : s) {
        if (a == '+') plus_count++;
        else if (a == '-') minus_count++;
        else if (a <= '9' && a >= '0') number += a;
    }
    int qm_count = (plus_count + minus_count);
    int n = stoi(number);
    if((plus_count-(n*minus_count))>n || ((n*plus_count)-minus_count)<n)
    {
        cout<<"Impossible";
        return 0;
    }
    cout<<"Possible"<<'\n';
    if(plus_count==1 &&minus_count==0) {
        cout<<n<<" = "<<n;
        return 0;
    }
    vector<int> sum(plus_count);
    vector<int> subs(minus_count);
    int p =(n+minus_count)/plus_count;
    int q=(n+minus_count)%plus_count;
    if(p==0) {
        p = 1;
        q = 0;
    }
    int temp;
    for(int i =0 ;i<plus_count;i++)
    {
        temp = p;
        if(q>= (n-p))
        {
            temp+= (n-p);
            q -= (n-p);
        }
        if(temp<=(n-q) && q)
        {
            temp+=q;
            q=0;
        }
        sum[i]=temp;
    }
    int k =0;
    k= accumulate(sum.begin(),sum.end(),0);
    if(minus_count)
    {
        p = (k-n)/minus_count; q = ((k-n)%minus_count);
    }
    if(p==0){
        p = 1;
        q = 0;
    }

    for(int i =0 ;i<minus_count;i++)
    {
        temp = p;
        if(q>= (n-p))
        {
            temp+= (n-p);
            q -= (n-p);
        }
        if(temp<=(n-q) && q)
        {
            temp+=q;
            q=0;
        }
        subs[i]=temp;
    }
    int sup=0;
    int  sbp=0;
    cout<<sum[sup]<<" ";
    sup++;
    for(int i =2;i<s.size();i++)
    {
        if(s[i]=='+')
        {
            cout<<"+ "<<sum[sup]<<" ";
            sup++;
        }
        if(s[i]=='-')
        {
            cout<<"- "<<subs[sbp]<<" ";
            sbp++;
        }
        if(s[i]=='=')
        {
            cout<<"="<<" ";
            break;
        }
    }
    cout<<n;
    return 0;
}
