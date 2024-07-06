#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m; cin>>n>>m;
    vector<vector<int>> a(n+1);
    for(int i=0; i<m; i++){
    	int u,v; cin>>u>>v;
    	a[u].push_back(v);
    }

    for(int i=1; i<=n; i++){
    	cout<<i<<" : ";
    	sort(a[i].begin(), a[i].end());
    	for(int x : a[i]){
    		cout<<x<<" ";
    	}
    	cout<<endl;
    }
    return 0;
}