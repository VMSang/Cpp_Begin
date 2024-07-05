/*
Theo Goldbach conjecture, một số nguyên dương chẵn >=4 đều có thể biểu diễn dưới dạng tổng của 2 số nguyên tố.
Cho số nguyên dương chẵn N >=4 . Hãy liệt kê các cặp số nguyên tố p, q có tổng đúng bằng N
Ví dụ N = 6 ta có 1 cặp số nguyên tố là 3 + 3 = 6.
*/

#include <bits/stdc++.h>
using namespace std;

bool is_Prime(int n) {
	if (n < 2) return false;
	if (n == 2 || n == 3) return true;
	if (n % 2 == 0 || n % 3 == 0) return false;
	for (int i = 5; i * i <= n; i += 6) {
		if (n % i == 0 || n % (i + 2) == 0) return false;
	}
	return true;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int ts; cin >> ts;
	while (ts--) {
		int n; cin >> n;
		for (int i = 2; i <= n / 2; i++) {
			if (is_Prime(i)) {
				if (is_Prime(n - i)) {
					cout << i << " " << n - i << endl;
				}
			}
		}
	}
	return 0;
}