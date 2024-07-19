#include <bits/stdc++.h>
using namespace std;

int n, m, s, t;
vector<int> ke[2000];
int visited[2000],  parent[2000];

void nhap() {
	cin >> n >> m >> s >> t;

	for (int i = 1; i <= m; i++) {
		int x, y; cin >> x >> y;

		ke[x].push_back(y);
		ke[y].push_back(x);
	}

	for (int i = 1; i <= n; i++) {
		sort(ke[i].begin(), ke[i].end());
	}
}

void DFS(int s) {
	visited[s] = 1;
	for (int x : ke[s]) {
		if (visited[x] == 0) {
			parent[x] = s;
			DFS(x);
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	nhap();

	DFS(s);

	if (!visited[t]) {
		cout << -1 << "\n";
	} else {
		vector<int> road;
		while (s != t) {
			road.push_back(t);
			t = parent[t];
		}
		road.push_back(s);
		reverse(road.begin(), road.end());
		for (int x : road) {
			cout << x << " ";
		}
	}

	return 0;
}
