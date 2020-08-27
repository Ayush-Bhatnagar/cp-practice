#include<bits/stdc++.h>
using namespace std;

int calc(vector<int> ar, int score, int pos, int left, int n, int k, int z, vector<vector<vector<int>>> dp) {
    int score1=0, score2=0;
    if(k==0) {
        dp[pos][k][z] = score;
        return score;
    }
    if(left && pos>1 && z>0 && k>0) {
        //cout<<" l "<<pos-1<<" s "<<score+ar[pos-1]<<"\n";
        if(dp[pos-1][k-1][z-1]!=-1) {
            score1 = score + dp[pos-1][k-1][z-1];
        }
        else {
            score1 = calc(ar, score+ar[pos-1], pos-1, 0, n, k-1, z-1, dp);
            dp[pos-1][k-1][z-1] = score1;
        }
    }
    if(pos<n && k>0) {
        //cout<<" r "<<pos+1<<" s "<<score+ar[pos+1]<<"\n"; 
        if(dp[pos+1][k-1][z]!=-1) {
            score2 = score2 + dp[pos+1][k-1][z];
        }
        else {
            score2 = calc(ar, score+ar[pos+1], pos+1, 1, n, k-1, z, dp);
            dp[pos+1][k-1][z] = score2;
        }
    }    
    int max_val = max(score1, score2);
    dp[pos][k][z] = max_val;
    return max_val;
}


void solve()
{
    int i, temp;
    int n, k, z;
    cin>>n>>k>>z;
    vector<int> ar(n+1);
    vector<vector<vector<int>>> dp(n+1, vector<vector<int>>(k+1, vector<int>(z+1, -1)));
    for(i=1;i<=n;i++) {
        cin>>ar[i];
    }
    int res = calc(ar,ar[1],1,0,n,k,z,dp);
    cout<<res<<"\n";
}


int main()
{
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}