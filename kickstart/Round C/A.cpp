#include<bits/stdc++.h>
using namespace std;

void solve(int tc)
{
    int n, k, i;
    cin>>n>>k;
    vector<int> ar(n);
    for(i=0;i<n;i++) {
        cin>>ar[i];
    }
    int flag=0, nv=k, count=0;
    for(i=0;i<n;i++) {
        //cout<<"ar[i] "<<ar[i]<<" nv "<<nv<<"\n";
        if(flag==1 && ar[i]==nv) {
            nv--;
        }
        else if(flag==1 && ar[i]!=nv) {
            if(ar[i]==k) {
                nv=k-1;
                flag=1;
            }
            else {
                nv=k;
                flag=0;
            }
        }
        else if(flag==0 && ar[i]==nv) {
            flag=1;
            nv--;
        }
        if(nv==0) {
            count++;
            nv=k;
        }
    }
    cout<<"Case #"<<tc<<": "<<count<<"\n";
}

int main()
{
    int t, i=1;
    cin>>t;
    while(i<=t) {
        solve(i);
        i++;
    }
    return 0;
}