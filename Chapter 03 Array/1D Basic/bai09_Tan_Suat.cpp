#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int cnt[10000001];

int main() {
	int n; cin >> n;
	int a[n];
	int min_value = 1e9;
	int max_value = -1e9;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
		cnt[a[i]] ++;
		min_value = min(a[i], min_value);
		max_value = max(a[i], max_value);
	}

	for (int i = min_value; i <= max_value; i++) {
		if (cnt[i] != 0)
			cout << i << " " << cnt[i] << endl;
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		if (cnt[a[i]] != 0) {
			cout << a[i] << ' ' << cnt[a[i]] << endl;
			cnt[a[i]] = 0;
		}
	}

	return 0;
}