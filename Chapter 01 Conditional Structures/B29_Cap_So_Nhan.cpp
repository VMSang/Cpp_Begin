#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	long long a, b, c, d;
	cin >> a >> b >> c >> d;
	if (a % b == 0) {
		long long congboi = a / b;
		if (b * congboi == c && c * congboi == d) {
			cout << "YES";
		} else {
			cout << "NO";
		}
	} else {
		cout << "NO";
	}
	return 0;
}