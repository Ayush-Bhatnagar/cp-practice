/*
    Created by: Ayush Bhatnagar
*/

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(int tc)
{
    ll a, b, ans = 0;
    cin>>a>>b;
    ll diff = abs(a-b);
    ll rem = diff%10;
    ans = diff/10;
    if(rem>0) {
        ans++;
    }
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