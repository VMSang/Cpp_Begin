#include <bits/stdc++.h>
using namespace std;



int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n; cin >> n;
	int a[n];
	for (int &x : a)
		cin >> x;

	long long f[n];
	long long MAX = 0;

	for (int i = 0; i < n; i++) {
		f[i] = 1;
		for (int j = 0; j < i; j++) {
			if (a[i] > a[j])
				f[i] = max(f[i], f[j] + 1);
		}
		MAX = max(f[i], MAX);
	}
	cout << MAX;
	return 0;
}