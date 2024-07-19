
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	vector<vector<int>> matrix(n + 1, vector<int> (n + 1));

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> matrix[i][j];
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (matrix[i][j] && i < j) {
				cout << j << " " << i << "\n";
			}
		}
	}

	cout<<"\n";

	for (int i = 1; i <= n; i++) {
		cout << i << " : ";
		for (int j = 1; j <= n ; j++) {
			if (matrix[i][j] == 1) {
				cout << j << " ";
			}
		}
		cout << "\n";
	}

}

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	ios_base::sync_with_stdio(false);
// 	cin.tie(NULL);

// 	int n; cin >> n;
// 	int a[n + 1][n + 1];
// 	for (int i = 1; i <= n; i++) {
// 		for (int j = 1; j <= n; j++) {
// 			cin >> a[i][j];
// 		}
// 	}

// 	for (int i = 1; i <= n; i++) {
// 		for (int j = 1; j <= n; j++) {
// 			if (a[i][j] && i > j) {
// 				cout << i << " " << j << endl;
// 				a[j][i] = 2;
// 			}
// 		}
// 	}

// 	vector<int> v[n + 1];
// 	for (int i = 1; i <= n; i++) {
// 		for (int j = 1; j <= n; j++) {
// 			if (a[i][j]) {
// 				v[i].push_back(j);
// 			}
// 		}
// 	}

// 	cout << endl;

// 	for (int i = 1; i <= n; i++) {
// 		cout << i << " : ";
// 		for (auto x : v[i]) {
// 			cout << x << " ";
// 		}
// 		cout << endl;
// 	}
// 	return 0;
// }