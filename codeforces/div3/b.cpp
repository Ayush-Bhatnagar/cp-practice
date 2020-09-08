/*
    Created by: Ayush Bhatnagar
*/

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll getmin(ll a, ll b, ll x, ll y, ll n)
{
    ll p;
    if(a==x && b==y) {
        p = a*b;
        return p;
    }
    ll diff1 = a - x;
    ll diff2 = b - y;
    ll sub1 = min(diff1, n);
    a = a - sub1;
    n = n - sub1;
    ll sub2 = min(diff2, n);
    b = b - sub2;
    n = n - sub2;
    p = a*b;
    return p;
}

void solve(int tc)
{
    ll a, b, x, y, ans, n;
    cin>>a>>b>>x>>y>>n;
    ans = getmin(a, b, x, y, n);
    ans = min(ans, getmin(b, a, y, x, n));
    cout<<ans<<"\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t, i=1;
    cin>>t;
    while(i<=t)
    {
        solve(i);
        i++;
    }
    return 0;
}