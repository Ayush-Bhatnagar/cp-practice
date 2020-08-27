#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long int n, k, ans=-1, div = -1;
    cin>>n>>k;
    vector<long int> ar(n);
    for(int i=0; i<n; i++) {
        cin>>ar[i];
    }
    for(int i=0; i<n; i++) {
        if(k>=ar[i]) {
            long int rem = (k-ar[i]) % ar[i];
            if(rem == 0) {
                long int temp = (k-ar[i]) / ar[i];
                if(div==-1) {
                    div = temp;
                    ans = ar[i];
                }
                else if(temp < div) {
                    div = temp;
                    ans = ar[i];
                }
            }
        }
    }
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