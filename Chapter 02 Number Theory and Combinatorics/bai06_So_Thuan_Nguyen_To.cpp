#include <bits/stdc++.h>
using namespace std;

bool is_Prime(int n) {
	if (n < 2) return false;
	if (n == 2 || n == 3) return true;
	if (n % 2 == 0 || n % 3 == 0) return false;
	for (int i  = 5; i * i <= n; i += 6) {
		if (n % i == 0 || n % (i + 2) == 0) return false;
	}
	return true;
}

bool prime_Digit(int n) {
	int dem = 0;
	while (n) {
		int digit = n % 10;
		if (digit != 2 && digit != 3 && digit != 5 && digit != 7) return false;
		dem += digit;
		n /= 10;
	}
	return is_Prime(dem);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b; cin >> a >> b;
	int dem = 0;
	for (int i = a; i <= b; i++) {
		if (prime_Digit(i) && is_Prime(i)) {
			dem++;
		}
	}
	cout << dem;
	return 0;
}