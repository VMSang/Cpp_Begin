#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	long long d1, d2, d3;
	cin >> d1 >> d2 >> d3;
	long long cach1 = d1 * 2 + d2 * 2;
	long long cach2 = d1 + d2 + d3;
	long long cach3 = d1 * 2 + d3 * 2;
	long long cach4 = d2 * 2 + d3 * 2;
	cout << max({cach1, cach2, cach3, cach4});
	return 0;
}