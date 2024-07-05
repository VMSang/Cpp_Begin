//là cặp số có GCD = 1

#include <bits/stdc++.h>
using namespace std;

int GCD(int a, int b) {
	while (b) {
		int tmp = a;
		a = b;
		b = tmp % b;
	}
	return a;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b; cin >> a >> b;
	for (int i = a; i < b; i++) {
		for (int j = i + 1; j <= b; j++) {
			if (GCD(i, j) == 1) {
				cout << "(" << i << "," << j << ")" << endl;
			}
		}
	}
	return 0;
}