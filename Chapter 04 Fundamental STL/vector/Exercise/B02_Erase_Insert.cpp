//hai ham nay truyen vao ieterator
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin >> n;
	vector<int> v(n);
	for (int &x : v) cin >> x;
	int ts; cin >> ts;
	while (ts--) {
		int x; cin >> x;
		if (x == 1) {
			int idx, value;
			cin >> idx >> value;
			if (idx >= 0 && idx < n) {
				v.insert(v.begin() + idx, value);
			}
		} else {
			int del;
			cin >> del;
			if (del >= 0 && del < n) {
				v.erase(v.begin() + del);
			}
		}
	}
	for (int x : v) {
		cout << x << " ";
	}
	return 0;
}