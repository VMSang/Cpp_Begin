#include <bits/stdc++.h>
using namespace std;

vector<int> dske[1001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m; cin>>n>>m;
    for(int i=1; i<=m; i++){
    	int x, y; cin>>x>>y;
    	dske[x].push_back(y);
    	dske[y].push_back(x); //neu co huong thi khong co dong nay
    }
    for(int i=1; i<=n; i++){
    	cout<<i<<" : ";
    	sort(dske[i].begin(), dske[i].end());
    	for(int x : dske[i]){
    		cout<<x<<" ";
    	}
    	cout<<"\n";
    }
    return 0;
}