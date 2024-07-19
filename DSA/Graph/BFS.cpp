//tim kiem theo chieu rong
//BFS Trên đồ thị vô hướng, không có trọng số: cho đường đi ngắn nhất trên đỉnh này đến đỉnh khác

#include <bits/stdc++.h>
using namespace std;

int n, m, s;
vector<int> ke[2000];
bool visited[2000];

void nhap() {
	cin >> n >> m >> s;
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

void BFS(int s) {
	queue<int> q;
	q.push(s);
	visited[s] = 1;

	while (!q.empty()) {
		int x = q.front(); q.pop();
		cout << x << " ";

		for (int y : ke[x]) {
			if (!visited[y]) {
				q.push(y);
				visited[y] = 1;
			}
		}
	}
}

int main() {
	nhap();
	BFS(s);

	return 0;
}