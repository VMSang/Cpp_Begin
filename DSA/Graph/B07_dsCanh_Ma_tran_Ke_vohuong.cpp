#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin>>n>>m;
    vector<vector<int>> matrix(n+1, vector<int> (n+1, 0));

    for(int i=1; i<=m; i++){
        int x, y; cin>>x>>y;
        matrix[x][y] = 1;
        matrix[y][x] = 1;
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }
}