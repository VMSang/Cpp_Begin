#include <bits/stdc++.h>
using namespace std;

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 	int n; cin>>n;
 	int a[n][n];
 	long long res = 0;
 	for(int i=1; i<=n; i++){
 		for(int j=1; j<n; j++){
 			long long tong = 0;
 			for(int k = 0; k<8; k++){
 				int i1 = i + dx[k];
 				int j1 = j + dy[k];
 				tong+=a[i1][j1];
 			}
 			res = max(res, tong);
 		}
 	}   

 	cout<<res;
    return 0;
}