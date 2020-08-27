#include<bits/stdc++.h>
using namespace std;

typedef long long ll; 

void solve(int tc)
{
    ll n, d, i;
    cin>>n>>d;
    vector<ll> ar(n);
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    ll upper = d;
    for(i=n-1;i>=0;i--) {
        ll rem = upper % ar[i];
        upper = upper - rem;
    }
    cout<<"Case #"<<tc<<": "<<upper<<"\n";
}

int main()
{
    int i=1, t;
    cin>>t;
    while(i<=t)
    {
        solve(i);
        i++;
    }
}