#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	long long k2, k3, k5, k6;
	cin >> k2 >> k3 >> k5 >> k6;
	long long MIN256 = min({k2, k5, k6});
	long long sum = MIN256 * 256;
	k2 -= MIN256;
	k5 -= MIN256;
	k6 -= MIN256;

	long long MIN32 = min(k2, k3);
	sum += MIN32 * 32;

	cout << sum;
	return 0;
}