#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long int N, W, i, j, sum = 0;
    cin>>N>>W;
    vector<long int> v(N+1), w(N+1);
    for(i=1;i<=N;i++) {
        cin>>w[i]>>v[i];
        sum  = sum + v[i]; 
    }
    vector<vector<long long int>> dp(N+1, vector<long long int>(sum+1, INT_MAX));
    for(i=1;i<=N;i++)
    {
        dp[i][v[i]] = w[i];
    }
    for(i=1;i<=N;i++) {
        for(j=1;j<=sum;j++) {
            if(v[i] > j)
                dp[i][j] = dp[i-1][j];
            else
                dp[i][j] = min({dp[i][j], dp[i-1][j], w[i] + dp[i-1][j-v[i]]});
        }
    }
    long long int ans = 0;
    for(i=1;i<=sum;i++) {
        if(dp[N][i]<=W) {
            ans = i;
        }
    }
    cout<<ans;
}

int main()
{
    solve();
    return 0;
}