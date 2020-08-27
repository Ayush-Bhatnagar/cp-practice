#include<bits/stdc++.h>

using namespace std;
int main() 
{
    int n, i;
    cin>>n;
    vector<int> h(n);
    for(i=0;i<n;i++) {
        cin>>h[i];
    }
    vector<int> dp(n, -1);
    dp[0]=0;
    for(i=0;i<n;i++) {
        if(i+1<n && dp[i+1]==-1) {
            dp[i+1] = dp[i] + abs(h[i+1]-h[i]);
        }
        else if(i+1<n && dp[i+1]!=-1) {
            dp[i+1] = min(dp[i+1], dp[i] + abs(h[i+1]-h[i]));
        }
        if(i+2<n && dp[i+2]==-1) {
            dp[i+2] = dp[i] + abs(h[i+2]-h[i]);
        }
        else if(i+2<n && dp[i+2]!=-1) {
            dp[i+2] = min(dp[i+2], dp[i] + abs(h[i+2]-h[i]));
        }
    }
    cout<<dp[n-1]<<"\n";
return 0;
}