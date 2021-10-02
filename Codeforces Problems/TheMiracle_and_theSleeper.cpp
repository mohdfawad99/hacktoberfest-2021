//https://codeforces.com/contest/1562/problem/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int l, r;
    cin >> l >> r;
    int ans = 0;
    if (l == r)
        ans = 0;
    else if (r / 2 >= l)
    {
        ans = r % (r / 2 + 1);
    }
    else
        ans = r % l;
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}