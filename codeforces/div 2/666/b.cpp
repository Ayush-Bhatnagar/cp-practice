/*
    Created by: Ayush Bhatnagar
*/
 
#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
vector<ll> ar;
 
ll compute(ll n, ll val)
{
    ll i, sum = 0;
    for(i=0;i<n;i++) {
        sum = sum + abs(ar[i] - pow(val, i));
    }
    return sum;
}
 
void solve(int tc)
{
    int flag = 0;
    ll i, n, temp, ans, curr;
    ar.clear();
    cin>>n;
    for(i=0;i<n;i++) {
        cin>>temp;
        ar.push_back(temp);
    }
    sort(ar.begin(), ar.end());
    long double power = (long double)1/(n-1); 
    ll iter = pow(ar[n-1], power) + 3;
    for(i=1; i<=iter; i++) {
        curr = compute(n, i);
        if(curr>=0) {
            if(flag==0) {
                ans = curr;
                flag=1;
            }
            else
                ans = min(ans, curr);
        }       
    }
    cout<<ans<<"\n";
}
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t, i=1;
    t = 1;
    while(i<=t)
    {
        solve(i);
        i++;
    }
    return 0;
}