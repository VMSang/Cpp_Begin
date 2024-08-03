#include <bits/stdc++.h>
using namespace std;

long long f[1000000];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, s; cin >> n >> s;
	int coin[n];
	for (int &x : coin) {
		cin >> x;
	}

	f[0] = 0;
	for (long long i = 1; i <= s; i++) {
		f[i] = 1e9;
		for (int &c : coin){
			if (i >= c){
				f[i] = min(f[i - c] + 1, f[i]);
			}
		}
	}


	cout << ((f[s] == 1e9) ? -1 : f[s]);
	return 0;
}