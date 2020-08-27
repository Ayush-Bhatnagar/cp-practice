#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, i, j;
    cin>>n>>k;
    vector<int> h(n);
    for(i=0;i<n;i++) {
        cin>>h[i];
    }
    vector<int> dp(n, -1);
    dp[0]=0;
    for(i=0;i<n;i++) {
        for(j=i+1;j<=i+k;j++) {
            if(j>=n) {
                break;
            }
            if(dp[j]==-1) {
                dp[j] = dp[i] + abs(h[j]-h[i]);
            }
            else {
                dp[j] = min(dp[j], dp[i]+abs(h[j]-h[i]));
            }
        }
    }
    cout<<dp[n-1]<<"\n";
    return 0;
}