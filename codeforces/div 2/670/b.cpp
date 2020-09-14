/*
    Created by: Ayush Bhatnagar
*/

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void findpair(ll &f, ll &s, ll val) {
    if(val*f > f*s && val*f > val*s) {
        s = val;
    }
    else if(val*s > f*s && val*s > val*f) {
        f = val;
    }
}


void solve(int tc)
{
    ll i, n;
    cin>>n;
    vector<ll> ar(n);
    for(i=0;i<n;i++) {
        cin>>ar[i];
    }
    ll first, second, temp;
    vector<int> suffix(n, 0);
    first = ar[n-1];
    second = ar[n-2];
    suffix[n-2] = first*second;
    for(i=n-3;i>=0;i--) {
        
        findpair(first, second, ar[i]);
        suffix[i] = first*second;
        cout<<first<<" "<<second<<" "<<suffix[i]<<"\n";
    }
    vector<int> prefix(n, 0);
    first = ar[0];
    second = ar[1];
    prefix[1] = first*second;
    for(i=2;i<n;i++) {
        
        findpair(first, second, ar[i]);
        prefix[i] = first*second;
    }

    int flag = 0;
    ll ans;
    for(i=2;i<=n-3;i++) {
        if(flag==0) {
            ans = prefix[i-1]*ar[i]*suffix[i+1];
            flag = 1;
        }
        else
            ans = max(ans, prefix[i-1]*ar[i]*suffix[i+1]);
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