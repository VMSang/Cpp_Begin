#include <bits/stdc++.h>
using namespace std;



int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, k; cin >> n >> k;
	int a[n];
	for (int &x : a)
		cin >> x;

	long long F[n];
	F[0] = 0;

	for (int i = 2; i < n; i++) {
		F[i] = LLONG_MAX;
		for (int j = 1; j <= k; j++) {
			F[i] = min(F[i], F[i - j] + abs(a[i - j] - a[i]));
		}
	}

	cout << F[n - 1];

	return 0;
}