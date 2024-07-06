#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> a;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	cin >> n >> m;
    a.resize(n + 1, vector<int>(n + 1, 0)); // Khởi tạo ma trận kề với kích thước (n+1) x (n+1)

    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        a[x][y] = a[y][x] = 1; // Đồ thị vô hướng
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
	return 0;
}