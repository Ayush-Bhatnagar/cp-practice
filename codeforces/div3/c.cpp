/*
    Created by: Ayush Bhatnagar
*/

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll getdivisor(ll n, ll x, ll y)
{
    ll divisor;
    ll diff = y - x;
    for(ll i=1; i<=diff; i++) {
        if(diff%i==0) {
            ll elem = diff/i + 1;
            if(elem <= n) {
                divisor = i;
                break;
            }
        }
    }
    return divisor;
}


void solve(int tc)
{
    ll n, x, y, i;
    cin>>n>>x>>y;
    if(n==2) {
        cout<<x<<" "<<y<<"\n";
        return;
    }
    ll div = getdivisor(n, x, y);
    //cout<<"div "<<div<<"\n";
    ll x1 = x;
    ll count = 0;
    for(i=x;i<=y;i=i+div) {
        cout<<i<<" ";
        count++;
    }
    if(n-count > 0) {
        while(x1-div>0 && (n-count)>0) {
            x1 = x1 - div;
            cout<<x1<<" ";
            count++;
        }
    }
    if(n-count>0) {
        while((n-count)>0) {
            y = y + div;
            cout<<y<<" ";
            count++;
        }
    }
    cout<<"\n";
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