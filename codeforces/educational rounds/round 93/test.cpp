#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t)
    {
        int n;
        cin>>n;
        int arr[n],arr2[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            arr2[i]=arr[i];
        }
        sort(arr,arr+n);
        int a=arr[0]+arr[1];
        int b=arr[n-1];
        if(b>=a)
            {
                int z,x,c;
                bool c1=true,c2=true,c3=true;
                for(int i=0;i<n;i++)
                {
                    if(arr[0]==arr2[i] && c1){
                        z=i+1;
                        c1=false;
                        }
                    else if(arr[1]==arr2[i] && c2){
                        x=i+1;
                        c2=false;
                    }
                    else if(arr[n-1]==arr2[i] && c3){
                        c=i+1;
                        c3=false;
                    }
                }
                cout<<z<<" "<<x<<" "<<c<<endl;
            }
        else
            cout<<-1<<endl;
        t--;
    }
}
