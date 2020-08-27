#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long int l, r;
    cin>>l>>r;
    if(r%l==0) {
        cout<<l<<" "<<r<<"\n";
    }
    else if(2*l <= r) {
        cout<<l<<" "<<2*l<<"\n";
    }
    else if(2*l > r) {
        cout<<"-1"<<" "<<"-1"<<"\n";
    }
}

int main()
{
    long int t;
    cin>>t;
    while(t--) {
        solve();
    }
    return 0;

}