#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin >> n;
	vector<int> v(n);
	for (int &x : v) cin >> x;
	int l, r; cin >> l >> r;

	for (auto it = v.begin() + l; it <= v.begin() + l + (r - l); it++) {
		cout << *it << " ";
	}
	cout << endl;
	for (auto it = v.begin() + r; it >= v.begin() + l; it--) {
		cout << *it << " ";
	}
	return 0;
}