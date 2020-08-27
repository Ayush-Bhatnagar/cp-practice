#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int pc, pr, dc, dr;
    cin>>pc>>pr;
    dc = pc / 9;
    if(pc%9 != 0)
        dc = dc + 1;
    dr = pr / 9;
    if(pr%9 != 0)
        dr = dr + 1;
    
    if(dc < dr)
    {
        cout<<"0 "<<dc<<"\n";
    }
    else if(dr <= dc)
    {
        cout<<"1 "<<dr<<"\n";
    }
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