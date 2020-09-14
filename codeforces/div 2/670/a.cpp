/*
    Created by: Ayush Bhatnagar
*/

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(int tc)
{
    int i, n, ans = 0, temp;
    vector<int> map(105, 0);
    cin>>n;
    for(i=0;i<n;i++) {
        cin>>temp;
        map[temp]++;
    }
    for(i=0;i<105;i++) {
        if(map[i]==0) {
            ans = ans + i;
            break;
        }
        else if(map[i]>0) {
            map[i] = map[i] - 1;
        }
    }
    for(i=0;i<105;i++) {
        if(map[i]==0) {
            ans = ans + i;
            break;
        }
    }
    cout<<ans<<"\n";
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