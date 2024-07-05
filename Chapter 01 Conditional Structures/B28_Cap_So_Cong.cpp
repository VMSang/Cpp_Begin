#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	long long n, u1, d;
	cin >> n >> u1 >> d;
	long long un = u1 + (n - 1) * d;
	long long sn = (n * (u1 + un)) / 2;
	
	cout << sn;
	return 0;
}