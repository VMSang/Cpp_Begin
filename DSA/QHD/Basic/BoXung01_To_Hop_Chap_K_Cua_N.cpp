#include <bits/stdc++.h>
using namespace std;


long long a[1005][1005];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	for (int i = 0; i < 1000; i++) {
		for (int j = 0; j <= i; j++) {
			if (j == 0 || i == j)
				a[i][j] = 1;
			else
				a[i][j] = (a[i - 1][j] + a[i - 1][j - 1]) % 1000000007;
		}
	}

	int q; cin >> q;
	while (q--) {
		int n, k; cin >> n >> k;
		cout << a[n][k] << "\n";
	}

	return 0;
}