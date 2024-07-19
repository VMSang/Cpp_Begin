// #include <bits/stdc++.h>
// using namespace std;

// int n, m, visited[2000];
// set<int> ke[2000];
// vector<pair<int, int>> dscanh;

// void nhap() {
// 	cin >> n >> m;

// 	for (int i = 1; i <= m; i++) {
// 		int x, y; cin >> x >> y;
// 		dscanh.push_back({x, y});
// 		ke[x].insert(y);
// 		ke[y].insert(x);
// 	}
// 	//khong can sort vi da dung set
// }

// int DFS(int u) {
// 	visited[u] = 1;
// 	for (int x : ke[u]) {
// 		if (!visited[x]) {
// 			DFS(x);
// 		}
// 	}
// }


// int main() {
// 	ios_base::sync_with_stdio(false);
// 	cin.tie(NULL);

// 	nhap();

// 	int cnt = 0;
// 	for(int i=1; i<=n; i++){
// 		if(!visited[i]){
// 			DFS(i);
// 			cnt++;
// 		}
// 	}

// 	int canhCau = 0;
// 	for(pair<int, int> iter : dscanh){
// 		memset(visited, 0, sizeof(visited));

// 		int x = iter.first, y = iter.second;
// 		ke[x].erase(y); ke[y].erase(x);

// 		int dem = 0;
// 		for(int i=1; i<=n; i++){
// 			if(!visited[i]){
// 				DFS(i);
// 				dem++;
// 			}
// 		}

// 		if(dem > cnt)
// 			canhCau++;

// 		ke[x].insert(y); ke[y].insert(x);
// 	}

// 	cout<<canhCau;
// 	return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int n, m, visited[2000];
vector<int> ke[2000];
vector<pair<int, int>> dscanh;

void nhap() {
	cin >> n >> m;

	for (int i = 1; i <= m; i++) {
		int x, y; cin >> x >> y;
		dscanh.push_back({x, y});
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
	for(int i = 1; i<=n; i++){
		sort(ke[i].begin(), ke[i].end());
	}
}

int DFS(int u, int s, int t) {
	visited[u] = 1;
	for (int x : ke[u]) {
		if((u==s && x == t) || (u == t && x == s)){
			continue;
		}
		if (!visited[x]) {
			DFS(x, s, t);
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
			DFS(i, -1, -1);
			cnt++;
		}
	}

	//O(E * (E + V))
	int canhCau = 0;
	for(pair<int, int> iter : dscanh){
		memset(visited, 0, sizeof(visited));

		int x = iter.first, y = iter.second;

		int dem = 0;
		for(int i=1; i<=n; i++){
			if(!visited[i]){
				DFS(i, x, y);
				dem++;
			}
		}

		if(dem > cnt)
			canhCau++;
	}

	cout<<canhCau;
	return 0;
}

