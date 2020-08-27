#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(int tc)
{
    int i, n, a, b,c, ans = 0;
    cin>>n>>a>>b>>c;
    int temp  = (a-c) + c + (b-c);
    if(temp > n) {
        cout<<"Case #"<<tc<<": "<<"IMPOSSIBLE"<<"\n";
        return;
    }
    if(n>1 && a==1 && b==1 && c==1) {
        cout<<"Case #"<<tc<<": "<<"IMPOSSIBLE"<<"\n";
        return;
    }
    // if(a==1 && b==1 && c==1) {
    //     cout<<"Case #"<<tc<<": "<<n<<" ";
    //     for(i=1;i<=n-1;i++) {
    //         cout<<i<<" ";
    //     }
    //     cout<<"\n";
    //     return;
    // }
    int l = n;
    int flag = 1;
    vector<int> k1;
    if(a-c > 0) {
        l = l-1;
        flag = 0;
        for(i=1;i<=a-c;i++) {
            k1.push_back(l);
        }
    }    
    for(i=1;i<=c;i++) {
        k1.push_back(n);
    }
    if(b-c > 0) {
        l = l-flag;
        for(i=1;i<=b-c;i++){
            k1.push_back(l);
        }
    }
    cout<<"Case #"<<tc<<": "<<k1[0]<<" ";
    l = l-1;
    for(i=1;i<=n-temp;i++) {
        cout<<l<<" ";
    }
    for(i=1;i<k1.size();i++) {
        cout<<k1[i]<<" ";
    }
    cout<<"\n";
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