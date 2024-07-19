#include <bits/stdc++.h>
using namespace std;

int n, m, visited[2000], parent[2000], check = 0;;
vector<int> ke[2000];

void nhap() {
	cin >> n >> m;
	for (int i = 1; i <= m; i++) {
		int x, y; cin >> x >> y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}

	memset(visited, 0, sizeof(visited));
	for(int i=1; i<=n; i++){
		sort(ke[i].begin(), ke[i].end());
	}
}

int DFS(int u){
	visited[u] = 1;
	for(int x : ke[u]){
		if(visited[x] && x != parent[u])
			check = 1;
	}
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    nhap();

    for(int i=1; i<=n; i++){
    	if(!visited[i])
    		DFS(i);
    }

    if(check)
    	cout<<1;
    else
    	cout<<0;
    return 0;
}