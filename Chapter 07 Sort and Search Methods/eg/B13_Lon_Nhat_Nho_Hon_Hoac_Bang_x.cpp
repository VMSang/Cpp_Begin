#include <bits/stdc++.h>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, x; cin >> n >> x;
	vector<int> v(n);
	for (int &x : v) {
		cin >> x;
	}
	// auto iter = upper_bound(v.begin(), v.end(), [](int x, int y)->bool{
	// 	return a < b;
	// })
	auto iter = upper_bound(v.begin(), v.end(), x);
	if (iter != v.begin()) {
		iter--;
		cout<<*iter<<"\n";
	} else {
		cout<<"NOT FOUND\n";
	}

	return 0;
}