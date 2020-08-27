#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string w;
    int i, len;
    string s;
    int x;
    cin>>s;
    cin>>x;
    len = s.size(); 
    for(i=1;i<=len;i++) 
        w.push_back('1');

    //cout<<w<<"\n";
    for(i=0;i<len;i++) {
        if(s[i]=='0') {
            if(i-x >=0)
                w[i-x] = '0';
            if(i+x<=len-1)
                w[i+x] = '0';
        }
    }
    //cout<<w<<"\n";
    int flag = 0;
    for(i=0;i<len;i++) {
        flag=0;
        if(s[i]=='1') {
           if(i-x>=0 && w[i-x]=='1') {
               flag=1;
           }
           if(i+x<=len-1 && w[i+x]=='1') {
               flag=1;
           }
           if(flag==0) {
               flag=2;
               break;
           }
        }
    }
    if(flag==2)
        cout<<"-1\n";
    else
        cout<<w<<"\n";
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