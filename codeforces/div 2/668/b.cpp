/*
    Created by: Ayush Bhatnagar
*/

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(int tc)
{
    ll i, n, ans = 0, pos = 0, neg, flag=0;
    cin>>n;
    vector<ll> ar(n);
    for(i=0;i<n;i++) {
        cin>>ar[i];
        if(ar[i]!=0) {
            flag=1;
        }
    }
    if(flag==0) {
        ans = 0;
        cout<<ans<<"\n";
        return;
    }
    else {
        for(i=0;i<n;i++) {
            pos = pos + ar[i];
            if(pos < 0) {
                pos= 0;
            }
        }
        cout<<pos<<"\n";
    }

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