#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> dske[2000];
bool visited[2000];
void nhap() {
	cin >> n >> m;
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
	visited[u] = 1;
	for (int x : dske[u]) {
		if (visited[x] == 0) {
			DFS(x);
		}
	}
}

int main() {
	nhap();
	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		if (visited[i] == 0) {
			cnt++;
			DFS(i);
		}
	}
	cout << cnt;
}