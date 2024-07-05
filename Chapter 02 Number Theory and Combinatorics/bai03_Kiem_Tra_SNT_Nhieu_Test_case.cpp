#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool Prime(int n) {
	if (n < 2) return false;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return false;
	}
	return true;
}

int main() {
	int T, n; cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> n;
		if (Prime(n)) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}