#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(int tc)
{
    ll mod = 1000000000;
    ll i;
    string s; ll n;
    cin>>s;
    n = s.size();
    vector<ll> dir(4, 0);
    vector<ll> stack(n+2); ll top = -1;
    vector<ll> curr(n+2);
    ++top;
    stack[top] = 1;
    curr[top] = 1;
    for(i=0;i<n;i++) {
        if(s[i]=='N')
            dir[0] = (dir[0] + stack[top]) % mod;
        else if(s[i]=='S')
            dir[1] = (dir[1] + stack[top]) % mod;
        else if(s[i]=='W')
            dir[2] = (dir[2] + stack[top]) % mod;
        else if(s[i]=='E')
            dir[3] = (dir[3] + stack[top]) % mod;
        else if(s[i]==')')
            top=top-1;
        else if(s[i] !='(') {
            ll num = s[i] - '0';
            ll cnum = (stack[top] * num) % mod;
            ++top;
            curr[top] = num;
            stack[top] = cnum;
        } 
    }
    ll x = 1, y=1;
    if(dir[0] > 0) {
        ll temp = x + (mod - dir[0]);
        x = (temp > mod) ? temp % mod : temp; 
    } 
    if(dir[1] > 0) {
        ll temp = x + dir[1];
        x = (temp > mod) ? temp % mod : temp; 
    }
    if(dir[2] > 0) {
        ll temp = y + (mod - dir[2]);
        y = (temp > mod) ? temp % mod : temp; 
    }
    if(dir[3] > 0) {
        ll temp = y + dir[3];
        y = (temp > mod) ? temp % mod : temp; 
    }
    cout<<"Case #"<<tc<<": "<<y<<" "<<x<<"\n";
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