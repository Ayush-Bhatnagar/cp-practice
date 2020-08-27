#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, i;
    string s;
    cin>>n;
    cin>>s;
    int len = 2*n - 1;
    string ans;
    for(i=0;i<len;i++){
        if(i%2==0)
            ans.push_back(s[i]);
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