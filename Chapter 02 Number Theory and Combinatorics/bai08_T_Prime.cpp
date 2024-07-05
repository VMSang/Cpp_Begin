/*
1 ước: 1
2: snt
3: snt bình phương p^2 (1, p, p^2 )
4: tích hai snt
5: p^4
*/

#include <bits/stdc++.h>
using namespace std;

const int maxSize = 1e6 + 1;
vector<bool> v(maxSize, true);

void sieve() {
	v[0] = v[1] = false;
	for (int i = 2; i * i <= maxSize; i++) {
		if (v[i]) {
			for (int j = i * i; j <= maxSize; j += i) {
				v[j] = false;
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	long long N; cin >> N;
	sieve();
	for (long long i = 2; i * i < N; i++) {
		if (v[i]) {
			cout << i*i << " ";
		}
	}
	return 0;
}