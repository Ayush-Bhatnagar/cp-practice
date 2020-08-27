#include<bits/stdc++.h>
using namespace std;

void solve(int tc)
{
    int n, k, p, i, j, l, dim;
    cin>>n>>k>>p;
    dim = max(p, k);
    vector<vector<int>> dp(n, vector<int>(dim, 0));
    for(i=0;i<n;i++)
    {
        for(j=0;j<k;j++) {
            cin>>dp[i][j];
        }
    }
    int sum;
    for(i=0;i<n;i++) {
        sum = 0;
        for(j=0;j<dim;j++) {
            sum = sum + dp[i][j];
            dp[i][j] = sum;
            //cout<<dp[i][j]<<" ";
        }
        //cout<<"\n";
    }
    vector<int> temp;
    for(i=1;i<n;i++) {
        temp.clear();
        for(j=0;j<dim;j++) {
            int iter = (j+1)/2;
            int ans = max(dp[0][j], dp[i][j]);
            for(l=1;l<=iter;l++) {
                int f = l;
                int s = (j+1)-l;
                ans = max({ans, dp[0][f-1]+dp[i][s-1], dp[0][s-1]+dp[i][f-1]});
            }
            temp.push_back(ans);
        }
        dp[0] = temp;
    }
    cout<<"Case #"<<tc<<": "<<dp[0][p-1]<<"\n";
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