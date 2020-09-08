/*
    Created by: Ayush Bhatnagar
*/

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(int tc)
{
    int i, n, ans = 0, k, c1 = 0, c0 = 0, cq = 0, strt, end, flag = 0;
    cin>>n>>k;
    string s, s1;
    cin>>s;
    for(i=0;i<k;i++) {
        s1.push_back('?');
    }
    //cout<<s1<<"\n";
    for(i=0;i<k;i++) {
        if(s[i]!='?')
            s1[i] = s[i];
    }
    for(i=0;i<n;i=i+1) {
        int pos = i%k;
        if(s[pos]!='?' && s1[pos]!='?' && s1[pos] != s[pos]) {
            cout<<"NO\n";
            return;
        }
        else if(s[pos]!='?' && s1[pos]=='?') {
            s1[pos] = s[pos];
        }
    }
    cout<<s1<<"\n";
    for(i=0;i<k;i++) {
        if(s1[i]=='1') c1++;
        else if(s1[i]=='0') c0++;
        else cq++;
    }
    if(abs(c1-c0) > cq) cout<<"NO\n";
    else cout<<"YES\n";

    return;
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