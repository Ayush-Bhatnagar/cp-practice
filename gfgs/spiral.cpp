#include<bits/stdc++.h>
using namespace std;

bool isSafe(int n, int x, int y) 
{
    if (x>=0 && x<=n-1 && y>=0 && y<=n-1)
        return true;
    return false;
}

void printSpiral(int n, int x, int y, char dir, vector<vector<int>> ar, vector<vector<int>> visited) 
{
    if(!isSafe(n, x, y) || visited[x][y])
        return;
    if(visited[x][y] ==0) {
        cout<<ar[x][y]<<" ";
        visited[x][y] = 1;
    }
    int flag;
    //while(1) {
        flag = 0;
        if(isSafe(n, x, y+1) && visited[x][y+1] ==0 && dir=='R') {
            printSpiral(n, x, y+1, dir, ar, visited);
            dir = 'D';
            flag=1;
        }
        if(isSafe(n, x+1, y) && visited[x+1][y] ==0 && dir=='D') {
            printSpiral(n, x+1, y, dir, ar, visited);
            dir = 'L';
            flag=1;
        }
        if(isSafe(n, x, y-1) && visited[x][y-1] ==0 && dir=='L') {
            printSpiral(n, x, y-1, dir, ar, visited);
            dir = 'U';
            flag=1;
        }
        if(isSafe(n, x-1, y) && visited[x-1][y] ==0 && dir=='U') {
            printSpiral(n, x-1, y, dir, ar, visited);
            dir = 'R';
            flag=1;
        }
        //if(!flag)
        //break;
    //}
}

int main()
{
    int i, j, n;
    cin>>n;
    vector<vector<int>> ar(n, vector<int>(n));
    vector<vector<int>> visited (n, vector<int>(n, 0));
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            cin>>ar[i][j];
        }
    }
    printSpiral(n, 0, 0, 'R', ar, visited);
    return 0;
}