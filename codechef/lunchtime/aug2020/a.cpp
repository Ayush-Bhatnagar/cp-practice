/*
    Created by: Ayush Bhatnagar
*/

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(int tc)
{
    int i, n;
    cin>>n;
    vector<int> ar(n);
    unordered_map<int, int> umap;
    for(i=0;i<n;i++){
        cin>>ar[i];
        umap[ar[i]]++;
    }
    vector<int> freq;
    for(auto it: umap) {
        freq.push_back(it.second);
    }
    int sz = freq.size();
    unordered_map<int, int> umap1;
    for(i=0;i<sz;i++) {
        umap1[freq[i]]++;
    }
    int f = 0, ans = 0;
    for(auto it: umap1) {
        if(it.second > f) {
            f = it.second;
            ans = it.first;
        }
        else if(it.second==f) {
            if(it.first < ans) {
                ans = it.first;
            }
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