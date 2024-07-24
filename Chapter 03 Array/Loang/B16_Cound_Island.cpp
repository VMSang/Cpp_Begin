#include <bits/stdc++.h>
using namespace std;

int n, m;
int a[50][50];

int dx[4] = { -1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

void Loang(int x, int y) {
	a[x][y] = 0;
	for (int i = 0; i < 4; i++) {
		int i1 = x + dx[i], j1 = y + dy[i];
		if (i1 >= 0 && j1 >= 0 && i1 < n && j1 < m && a[i1][j1] == 1)
			Loang(i1, j1);
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}

	int ans = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] == 1) {
				ans++;
				Loang(i, j);
			}
		}
	}

	cout << ans;

	return 0;
}