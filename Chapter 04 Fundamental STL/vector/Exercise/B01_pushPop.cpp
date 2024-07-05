#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> v;
	int cnt; cin >> cnt;
	int n, m;
	for (int i = 0; i < cnt; i++) {
		cin >> n;
		if (n == 1) {
			cin >> m;
			v.push_back(m);
		} else {
			if (!v.empty()) {
				v.pop_back();
			}
		}
	}
	if (v.empty()) {
		cout << "EMPTY" << endl;
	} else {
		for (int x : v) {
			cout << x << " ";
		}

	}
	cerr<<"time run"<<1000*clock()/CLOCKS_PER_SEC<<"ms/s";
	return 0;
}