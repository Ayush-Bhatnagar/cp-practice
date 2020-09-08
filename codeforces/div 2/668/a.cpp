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
    vector<int> ar(n);
    for(i=0;i<n;i++) {
        cin>>ar[i];
    }
    reverse(ar.begin(), ar.end());
    for(i=0;i<n;i++) {
        cout<<ar[i]<<" ";
    }
    cout<<"\n";
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