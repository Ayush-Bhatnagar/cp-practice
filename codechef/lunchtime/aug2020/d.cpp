/*
    Created by: Ayush Bhatnagar
*/

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

double ans;
vector<double> strt_time, end_time;
unordered_map<int, int> umap;

bool f(double value, double delta)
{
    int i1 = 0, j1 = 0;
    int i=0, count = 0;
    double tm = 0;
    int sn = strt_time.size();
    int en = end_time.size();
    bool flag = true;
    for(tm=0;tm<=end_time[en-1];tm=tm+delta) {
        if(tm >= end_time[j1]) {
            if(count < umap[end_time[j1]]) {
                flag=false;
                break;
            }
            j1++;
            continue;
        }
        count++;
    }
    return flag;
}

void search(double lower, double higher, double delta) {

    if(lower > higher)
        return;
    double mid = (lower + higher) / 2;
    if(f(mid, delta)) {
        lower = lower + delta;
        search(lower, higher, delta);
    }
    else {
        higher = mid;
        search(lower, higher, delta);
    }
}

void solve(int tc)
{
    ll i, n, d, ans = 0;
    cin>>n>>d;
    vector<ll> c(n);
    strt_time.clear(); end_time.clear(); umap.clear();
    double lower, upper, delta;
    for(i=0;i<n;i++) {
        cin>>c[i];
    }
    delta = d / n;
    for(i=0;i<n;i++) {
        umap[c[i]+d]++;
    }
    ll count = 0;
    for(auto it: umap) {
        if(it.second > count) {
            count = it.second;
        }
        strt_time.push_back((double)it.first);
        end_time.push_back((double)it.first+d);
    }
    sort(strt_time.begin(), strt_time.end());
    sort(end_time.begin(), end_time.end());
    lower = d / count;
    double higher = (end_time[end_time.size()-1] - strt_time[0]) / n;
    search(lower, higher, delta); 
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