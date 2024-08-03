#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;
const int maxN = 1000000;

long long dp[maxN];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, k; cin >> n >> k;
	dp[0] = 1;
	long long cnt = 0;

	for (int i = 1; i <= n; i++) {
		//f[i] = f[i-1] + f[i-2] + f[i-k]
		for (int j = 1; j <= min(i, k); j++) {
			dp[i] = dp[i - j];
			dp[i] %= mod;
		}
	}

	cout << dp[n];
	return 0;
}