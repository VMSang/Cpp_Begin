//v.begin() + r chỉ đến phần tử ở vị trí R, nhưng reverse không bao gồm phần tử này
// ta cần sử dụng v.begin() + r + 1
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin >> n;
	vector<int> v(n);
	for (int &x : v) cin >> x;
	int l, r; cin >> l >> r;

	reverse(v.begin(), v.end());
	for (int x : v) cout << x << " ";

	cout << endl;

	reverse(v.begin() + l, v.begin() + r);
	for (int x : v) cout << x << " ";
	return 0;
}