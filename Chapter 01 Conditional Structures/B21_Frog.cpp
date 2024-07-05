#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	long long a, b, k;
	cin >> a >> b >> k;
	long vitri = 0;
	if (k % 2 == 0) {
		vitri = (k / 2 * a) - (k / 2 * b);
	} else {
		vitri = (k / 2 * a + a) - (k / 2 * b);
	}
	cout<<vitri;
	return 0;
}