#include <bits/stdc++.h>
using namespace std;

bool check(int n) {
	for (int i = 2 ; i <= sqrt(n) ; i++) {
		if (n % i == 0) return false;
	}
	return n > 1;
}

int main() {
	int n;
	cin >> n;
	if (check(n)) {
		cout << "YES";
	}
	else cout << "NO";
	return 0;
}