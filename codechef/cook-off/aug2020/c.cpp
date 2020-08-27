#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(int tc)
{
    ll i, n, ans = 0, x, y;
    cin>>n;
    for(i=1;i<=n;i++) {
        cin>>x>>y;
    }
    ans = n;
    while(n/2>2) {
        n = n / 2;
        ans = ans + n;
    }
    cout<<ans<<"\n";
}

int main()
{
    int t, i=1;
    cin>>t;
    while(i<=t)
    {
        solve(i);
        i++;
    }
    return 0;
}