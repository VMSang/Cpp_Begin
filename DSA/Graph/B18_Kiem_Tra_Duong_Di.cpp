#include <bits/stdc++.h>
using namespace std;

int n, m, dem = 0;
vector<int> ke[2000];
bool visited[2000];
int tplt[2000]; //int vì sẽ lưu biến đếm không chỉ có 0,1

void nhap() {
	cin >> n >> m;

	for (int i = 1; i <= m; i++) {
		int x, y; cin >> x >> y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}

	for (int i = 1; i <= n; i++) {
		sort(ke[i].begin(), ke[i].end());
	}
}

void BFS(int s) {
	queue<int> q;
	q.push(s);
	visited[s] = 1;

	while (!q.empty()) {
		int x = q.front(); q.pop();
		tplt[x] = dem;

		for (int y : ke[x]) {
			if (!visited[y]) {
				q.push(y);
				visited[y] = 1;
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	nhap();

	for (int i = 1; i <= n; i++) {
		if (!visited[i]) {
			dem++;
			BFS(i);
		}
	}

	int q; cin >> q;
	while (q--) {
		int s, t; cin >> s >> t;
		//time limmited
		// memset(visited, 0, sizeof(visited));
		// BFS(s);
		// if(!visited[t]){
		// 	cout<<-1<<"\n";
		// } else {
		// 	cout<<1<<"\n";
		// }

		if (tplt[s] == tplt[t]) {
			cout << 1 << "\n";
		}
		else {
			cout << -1 << "\n";
		}
	}


	return 0;
}
