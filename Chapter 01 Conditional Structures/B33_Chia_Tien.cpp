#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	long a, b, c, n;
	cin >> a >> b >> c >> n;
	// long MAX = Math.max(a, Math.max(b, c));
	// long sum = 0;
	// if (MAX - a > 0) sum += MAX - a;
	// if (MAX - b > 0) sum += MAX - b;
	// if (MAX - c > 0) sum += MAX - c;

	// n -= sum;
	// if ((n >= 3) && n % 3 == 0) System.out.println("YES");
	// else System.out.println("NO");

	long long sum = a + b + c + n;
	if (sum % 3 == 0) {
		long long res = sum / 3;
		if (res >= a && res >= b && res >= c) {
			cout << "YES";
		} else {
			cout << "NO";
		}
	} else {
		cout << "NO";
	}
	return 0;
}