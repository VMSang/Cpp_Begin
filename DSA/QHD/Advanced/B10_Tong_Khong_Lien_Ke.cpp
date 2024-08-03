#include <bits/stdc++.h>
using namespace std;

long long dp[1000000];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n; cin >> n;
	long long a[n];
	for (long long &x : a) cin >> x;

	dp[0] = a[0];
	for (int i = 1; i < n; i++) {
		dp[i] = max(dp[i - 1], dp[i - 2] + a[i]);
	}

	cout << dp[n-1];

	return 0;
}