#include <bits/stdc++.h>
using namespace std;

int n, m, s;
vector<int> dske[2000];
bool visited[2000];
void nhap() {
	cin >> n >> m >> s;
	for (int i = 1; i <= m; i++) {
		int x, y; cin >> x >> y;
		dske[x].push_back(y);
		dske[y].push_back(x);
	}

	for (int i = 1; i <= n; i++) {
		sort(dske[i].begin(), dske[i].end());
	}
}

void DFS(int u) {
	cout << u << " ";
	visited[u] = 1;
	for (int x : dske[u]) {
		if (visited[x] == 0) {
			DFS(x);
		}
	}
}

int main() {
	nhap();
	DFS(s);
}