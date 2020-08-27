#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int p, h, flag = 0;
    cin>>h>>p;
    while(p>0)
    {
        h = h - p;
        if(h<=0) {
            flag = 1;
            break;
        }
        p = p / 2;
    }
    cout<<flag<<"\n";
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