#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long int N, W, i, j;
    cin>>N>>W;
    vector<long int> v(N+1), w(N+1);
    for(i=1;i<=N;i++) {
        cin>>w[i]>>v[i]; 
    }
    vector<vector<long long int>> dp(N+1, vector<long long int>(W+1, 0));
    for(i=1;i<=N;i++)
    {
        dp[i][w[i]] = v[i];
    }
    for(i=1;i<=N;i++) {
        for(j=1;j<=W;j++) {
            if(w[i] > j)
                dp[i][j] = dp[i-1][j];
            else
                dp[i][j] = max({dp[i][j], dp[i-1][j], v[i] + dp[i-1][j-w[i]]});
        }
    }
    cout<<dp[N][W];
}

int main()
{
    solve();
    return 0;
}