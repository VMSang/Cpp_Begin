#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin >> n;
	vector<pair<pair<int, int>, int>> v(n);
	for (auto &x : v) cin >> x.first.first >> x.first.second >> x.second;

	for (auto x : v) {
		cout << x.first.first + x.first.second + x.second<<" ";
	}
	return 0;
}