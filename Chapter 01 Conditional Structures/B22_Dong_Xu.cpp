#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, S;
	cin >> n >> S;
	cout << (S + n - 1) / n;
	return 0;
}