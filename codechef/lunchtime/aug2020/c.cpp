/*
    Created by: Ayush Bhatnagar
*/

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(int tc)
{
    ll i, n, m, ans = 0, j;
    cin>>n>>m;
    vector<ll> initial_ratings(n);
    for(i=0;i<n;i++) {
        cin>>initial_ratings[i];
    }
    vector<vector<ll>> ratings(n, vector<ll>(m));
    ll temp;
    for(i=0;i<n;i++) {
        ll r = initial_ratings[i];
        for(j=0;j<m;j++) {
            cin>>temp;
            r = r + temp;
            ratings[i][j] = r;
        }
    }
    vector<ll> best_rating(n, 0); // best rating of ith player after jth month
    for(i=0;i<n;i++) {
        ll best = LLONG_MIN;
        ll month = 0;
        for(j=0;j<m;j++) {
            if(ratings[i][j] > best) {
                best = ratings[i][j];
                month = j;
            }
        }
        best_rating[i] = month;
    }
    vector<vector<ll>> ranks(n, vector<ll>(m, 0));
    vector<pair<ll, ll>> vp(n);
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++) {
            vp[j] = {ratings[j][i], j};
        }
        sort(vp.begin(), vp.end());
        ll rank = 0, val = -1;
        for(j=n-1;j>=0;j--) {
            ll rt = vp[j].first;
            ll id = vp[j].second;
            if(val==-1) {
                val = rt;
                rank = 1;
                ranks[id][i] = rank;
            }
            else if(rt==val) {
                ranks[id][i] = rank;
            }
            else if(rt!=val) {
                val = rt;
                rank = ((vp.size()-1) - j) + 1;
                ranks[id][i] = rank; 
            }
        }
    }
    for(i=0;i<n;i++) {
        ll best_rank = -1;
        ll best_month = 0;
        for(j=0;j<m;j++) {
            if(best_rank==-1) {
                best_rank = ranks[i][j];
                best_month = j;
            }
            else if(ranks[i][j] < best_rank) {
                best_rank = ranks[i][j];
                best_month = j;
            }
        }
        if(best_rating[i] != best_month) {
            ans ++;
        }
    }
    cout<<ans<<"\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t, i=1;
    cin>>t;
    while(i<=t)
    {
        solve(i);
        i++;
    }
    return 0;
}