#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j, k;
    cin>>n;
    vector<vector<int>> happ(n);
    for(i=0;i<n;i++) {
        happ[i] = vector<int>(3);
    }
    for(i=0;i<n;i++) {
        for(j=0;j<3;j++) {
            cin>>happ[i][j];
        }
    }
    vector<int> curr(3);
    vector<int> next(3, 0);
    curr[0] = happ[0][0];
    curr[1] = happ[0][1];
    curr[2] = happ[0][2];
    for(i=0;i<n-1;i++) {
        for(j=0;j<3;j++) {
            for(k=0;k<3;k++) {
                if(k!=j) {
                    next[k] = max(next[k], curr[j] + happ[i+1][k]);
                }
            }
        }
        curr = next;
        next[0] = 0; next[1] = 0; next[2] = 0;
    }
    cout<< max({curr[0], curr[1], curr[2]})<<"\n";
    return 0;
}