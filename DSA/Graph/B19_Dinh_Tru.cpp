#include <bits/stdc++.h>
using namespace std;

int n, m, visited[2000];
vector<int> ke[2000];

void nhap(){
	cin>>n>>m;

	for(int i=1; i<=m; i++){
		int x, y; cin>>x>>y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}

	for(int i=1; i<=n; i++){
		sort(ke[i].begin(), ke[i].end());
	}
}

int DFS(int u){
	visited[u] = 1;
	for(int x : ke[u]){
		if(!visited[x]){
			DFS(x);
		}
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    nhap();

    //O(E + V)
    int cnt = 0;
    for(int i=1; i<=n; i++){
    	if(!visited[i]){
    		DFS(i);
    		cnt++;
    	}
    }

    //O(V * (E + V))
    int tru = 0;
    for(int i=1; i<=n; i++){
    	memset(visited, 0, sizeof(visited));
    	visited[i] = 1; //loai bo diem do di

    	int dem = 0;
    	for(int j=1; j<=n; j++){
    		if(!visited[j]){
    			DFS(j);
    			dem++;
    		}
    	}

    	if(dem > cnt)
    		tru++;
    }

    cout<<tru;
    return 0;
}