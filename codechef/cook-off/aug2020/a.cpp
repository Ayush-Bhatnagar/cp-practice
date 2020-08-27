#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(int tc)
{
    int i, n, k, ans = 0;
    cin>>n>>k;
    vector<int> ar(n);
    for(i=0; i<n; i++) {
        cin>>ar[i];
    }
    for(i=0;i<n;i++) {
        if(ar[i]>k) {
            cout<<"-1"<<"\n";
            return;
        }
    }
    int sum = 0, pos = -1;
    for(i=0; i<n; i++) {
        if(sum+ar[i]>k) {
            sum = ar[i];
            ans++;
            pos = i-1;
        }
        else {
            sum = sum + ar[i];
        }
    }
    if((pos==-1)||(pos<n-1))
        ans++;
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