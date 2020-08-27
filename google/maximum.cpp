#include<bits/stdc++.h>
using namespace std;

vector<int> maximum(vector<int> ar, int k)
{
    int n = ar.size();
    int i, j, l, flag = 0, index = 0;
    vector<int> subarray(k, -1);
    for(i=0; i<=n-k; i++)
    {
        j = i+k-1;
        index = 0;
        flag = 0;
        for(l=i; l<=j; l++) {
            if(flag) {
                subarray[index] = ar[l];
            }
            else if(ar[l] > subarray[index]) {
                subarray[index] = ar[l];
                flag = 1;
            }
            index++;
        }
    }
    return subarray;
}

int main()
{
    vector<int> ar({1});
    int k = 1;
    vector<int> ans = maximum(ar, k);
    for(int i=0; i<ans.size(); i++) {
        cout<<ans[i]<<" ";
    }
    return 0;
}