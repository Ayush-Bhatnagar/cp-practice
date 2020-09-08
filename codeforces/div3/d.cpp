/*
    Created by: Ayush Bhatnagar
*/

#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ll;

void solve(int tc)
{
    ll n, s, i, sum = 0, sz, ans=0;
    string n1, s1;
    cin>>n1>>s1;
    n = stoll(n1);
    s = stoll(s1);
    sz = n1.size();
    for(i=0;i<sz;i++) {
        sum = sum + (n1[i] - '0');
    }
    //cout<<s<<" "<<sum<<"\n";
    if(sum==s) {
        ans = 0;
        cout<<ans<<"\n";
    }
    else if(sum>s) {
        ll newnum = ceil(pow(10, sz));
        cout<<"pow "<<newnum<<"\n";
        //newnum = newnum+1;
        //cout<<"pow "<<newnum<<"\n";
        ans = newnum - n;
        cout<<ans<<"\n";
    }
    else {
        ll diff = sum - s;
        for(i=sz-1;i>=0;i--) {
            ll digit = n1[i] - '0';
            ll d = 9 - digit;
            if(diff>=d) {
                n1[i] = '9';
                diff = diff - d;
            }
            else {
                n1[i] = n1[i] + d;
                diff=0;
            }
            if(diff==0) {
                break;
            }
        }
        ll newnum = stoll(n1);
        ans = newnum - n;
        cout<<ans<<"\n";
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