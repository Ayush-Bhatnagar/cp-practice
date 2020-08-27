#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long int n, i, j;
    string s;
    cin>>n;
    cin>>s;
    vector<long int> prefix(n, 0), suffix(n, 0);
    long int sum = 0, count = 0;
    for(i=n-1;i>=0;i--)
    {
        if(s[i]=='0')
            count++;
        suffix[i] = count;
    }
    long int ans = 0, first = 0;
    sum = 0;
    for(i=0;i<n;i++) {
        sum = sum + (s[i] - '0');
        long int len = (i-first)+1;
        if(sum == len) {
            ans++;
        }
        else if(sum > len) {
            if(j+1<=n-1) {
                if(suffix[j+1] < (sum-len)) {
                    first++;
                    sum = sum - s[first] - '0';
                    len = i-first+1;
                    if(sum==len)
                        ans++;
                }
            }
        }
    }
    cout<<ans<<"\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}