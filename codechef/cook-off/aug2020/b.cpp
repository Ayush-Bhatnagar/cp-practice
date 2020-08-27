#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(int tc)
{
    int i, n, k,c1=0, c0=0;
    cin>>n>>k;
    string s;
    cin>>s;
    for(i=0;i<n;i++) {
        if(s[i]=='1')
            c1++;
        else
            c0++;
    }
    int dim = n / k;
    if((c1 % dim != 0) || (c0 % dim != 0)) {
        cout<<"IMPOSSIBLE"<<"\n";
        return ;
    }
    else {
        vector<int> ans;
        int sz0 = c0 / dim;
        int sz1 = c1 / dim;
        for(i=1;i<=sz0;i++)
            ans.push_back(0);
        for(i=1;i<=sz1;i++)
            ans.push_back(1);
        for(i=1;i<=dim;i++) {
            for(int j=0;j<ans.size();j++) {
                cout<<ans[j];
            }
            reverse(ans.begin(), ans.end());
        }
        cout<<"\n"; 
    }   
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