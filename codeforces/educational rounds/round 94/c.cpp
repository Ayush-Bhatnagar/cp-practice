#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    ll ca, cb;
    cin>>ca>>cb;
    ll na, nb;
    cin>>na>>nb;
    ll wa, wb;
    cin>>wa>>wb;
    ll munits, ans= 0, mw, lw, lunits;
    if(wa<=wb) {
        mw = wa;
        lw = wb;
        lunits = nb;
        munits = na;
    }
    else {
        mw = wb;
        lw = wa;
        lunits = na;
        munits = nb;
    }
    //if(munits%2==0) {
        if(ca>=(munits/2)*mw) {
            ans = ans + munits/2;
            ca = ca - (munits/2)*mw;
        }      
        else {
            ans = ans + ca/mw;
            ca = ca - (ca/mw);
        }  

        if(cb>=(munits/2)*mw) {
            ans = ans + munits/2;
            cb = cb - (munits/2)*mw;
        }
        else {
            ans = ans + cb/mw;
            cb = cb - (cb/mw);
        }

        if(munits%2!=0) {
            if(ca>=mw) {
                ans++;
                ca = ca - mw;
            }
            else if(cb>=mw) {
                ans++;
                cb = cb - mw;
            }
        }
        ll temp = min(ca/lw, lunits);
        lunits = lunits - temp;
        ans = ans + temp;
        temp = min(cb/lw, lunits);
        ans = ans + temp;
    //}
    cout<<ans<<"\n";
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}