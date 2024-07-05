#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	cin >> n >> m;
	int min, max = n;

	if (n % 2 == 0) {
		min = n / 2;
	} else {
		min = n / 2 + 1;
	}
	if (min <= max) {
		cout << ((min + m - 1) / m) * m;
	} else {
		cout << "-1";
	}
	return 0;
}