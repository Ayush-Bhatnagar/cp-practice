#include<bits/stdc++.h>
using namespace std;

void solve(int tc)
{
    int i, n, max, ans;
    cin>>n;
    vector<int> ar(n);
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    max = -1;
    ans = 0;
    for(i=0;i<=n-2;i++) {
        if(i==0) {
            if(ar[i] > ar[i+1])
                ans++;
            max = ar[i];
        }
        else {
            if(ar[i] > max) {
                if(ar[i] > ar[i+1])
                    ans++;
                max = ar[i];
            }
        }
    }
    if(ar[n-1] > max)
        ans++;
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