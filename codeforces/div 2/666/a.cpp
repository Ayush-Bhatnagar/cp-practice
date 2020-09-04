/*
    Created by: Ayush Bhatnagar
*/

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(int tc)
{
    int i, n, ans = 0;
    cin>>n;
    string s[n];
    for(i=0;i<n;i++)
    {
        cin>>s[i];
    }
    unordered_map<int, int> umap;
    for(i=0;i<n;i++) {
        for(int j=0;j<s[i].size();j++) {
            umap[s[i][j]-'a']++;
        }
    }
    int status = 0;
    for(auto it: umap) {
        if(it.second % n !=0) {
            status = 1;
            break;
        }
    }
    if(status)
        cout<<"NO\n";
    else
        cout<<"YES\n";
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