#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(int tc)
{
    int i, n, ans = 2;
    cin>>n;
    vector<int> ar(n);
    for(i=0;i<n;i++) {
        cin>>ar[i];
    }
    int count = 2, diff = ar[0] - ar[1];
    for(i=1;i<=n-2;i++) {
        if(ar[i]-ar[i+1] == diff) {
            count++;
        }
        else {
            diff = ar[i] - ar[i+1];
            count = 2;
        }
        ans = max(ans, count);
    }
    cout<<"Case #"<<tc<<": "<<ans<<"\n";
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