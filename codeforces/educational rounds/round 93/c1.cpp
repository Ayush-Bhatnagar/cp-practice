#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long int n, i;
    cin>>n;
    vector<long int> ar(n);
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    long int sum = ar[0] + ar[1];
    cout<<sum<<"\n";
    if(sum <= ar[n-1]) {
        cout<<"1 2 "<<n<<"\n";
    }
    else {
        cout<<"-1"<<"\n";
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