#include<bits/stdc++.h>
using namespace std;

int coinChange(vector<int> &coins, int amount)
{
    if(amount == 0)
        return 0;
    if(coins.size()== 0)
        return -1;
    int n = coins.size();
    int i, j;
    vector<vector<int>> dp(n+1, vector<int>(amount+1, INT_MAX));
    for(i=0;i<n;i++)
    {
        if(coins[i]<=amount)
            dp[i+1][coins[i]] = 1;
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=amount;j++)
        {
            if(coins[i-1] > j)
                dp[i][j] = dp[i-1][j];
            else {
                int val1 = (dp[i-1][j-coins[i-1]] == INT_MAX) ? INT_MAX : 1 + dp[i-1][j-coins[i-1]];  
                int val2 = (dp[i][j-coins[i-1]] == INT_MAX) ? INT_MAX : 1 + dp[i][j-coins[i-1]];
                dp[i][j] = min({dp[i][j], dp[i-1][j], val1, val2});
            }
        }
    }
    // for(i=0;i<=n;i++) {
    //     for(j=0;j<=amount;j++) {
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }
    int ans = INT_MAX;
    for(i=1;i<=n;i++) {
        ans = min(ans, dp[i][amount]);
    }
    if(ans == INT_MAX) {
        ans = -1;
    }
    return ans;
}

int main()
{
    int n, amount, i;
    cin>>n;
    vector<int> coins(n);
    for(i=0;i<n;i++)
    {
        cin>>coins[i];
    }
    cin>>amount;
    int ans = coinChange(coins, amount);
    cout<<ans;
    return 0;
}