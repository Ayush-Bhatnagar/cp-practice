#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;
    //cout<<s<<"\n";
    int len = s.size();
    int i;
    vector<int> ar;
    int count = 0;
    for(i=0;i<len;i++) {
        if(s[i]=='1') {
            count++;
        }
        else if(s[i]=='0') {
            if(count>0)
                ar.push_back(count);
            count=0;
        }
        
        if(s[i]=='1' && i==len-1) {
            ar.push_back(count);
        }
    }
    sort(ar.begin(), ar.end(), greater<int>());
    len = ar.size();
    /*for(i=0;i<len;i++) {
        cout<<ar[i]<<" ";
    }
    cout<<"\n";*/
    int ans = 0;
    for(i=0;i<len;i++)
    {
        if(i%2==0) {
            ans = ans + ar[i];
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