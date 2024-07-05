#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	int sum = 0;
	sum += n / 100;
	n %= 100;
	sum += n / 20;
	n %= 20;
	sum += n / 10;
	n %= 10;
	sum += n / 5;
	n %= 5;
	sum += n;
	cout << sum;
	return 0;
}