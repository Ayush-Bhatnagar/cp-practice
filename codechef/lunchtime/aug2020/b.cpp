/*
    Created by: Ayush Bhatnagar
*/

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(int tc)
{
    int i, n, ans = 0, flag=0;
    cin>>n;
    vector<int> ar(n);
    for(i=0;i<n;i++) {
        cin>>ar[i];
        if(ar[i]==0)
            flag=1;
    }
    if(n==2 || flag==0) {
        cout<<"No"<<"\n";
        return;
    }
    else {
        int count = 0;
        vector<int> zeroes;
        for(i=0;i<=n-1;i++) {
            if(ar[i]==0) {
                count++;
            }
            else {
               if(count>0) {
                    zeroes.push_back(count);
                    count = 0;
               }
            }
        }
        sort(zeroes.begin(), zeroes.end());
        int sz = zeroes.size();
        if(zeroes[sz-1]%2==0)
            cout<<"No\n";
        else {
            if(sz>=2) {
                if(zeroes[sz-2]>= (zeroes[sz-1]/2)+1) {
                    cout<<"No\n";
                    return;
                }
            }
            cout<<"Yes\n";
        }
    }
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