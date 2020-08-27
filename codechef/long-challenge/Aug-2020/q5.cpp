#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k,ans=0, temp, i;
    cin>>n>>k;
    unordered_map<int, int> umap;
    for(i=0;i<n;i++)
    {
        cin>>temp;
        umap[temp]++;
    }
    for(auto it: umap) 
    {
        if(it.second > ans) {
            ans=it.second;
        }
    }
    cout<<ans<<"\n";
}

int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        solve();
    }
    return 0;
}