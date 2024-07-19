// O(N)
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> v = {1, 2, 3, 4, 5, 6, 7};
	auto iter = find(v.begin(), v.end(), 5);

	int a[] = {1, 2, 3, 4, 5, 6, 7};
	int n = 7;
	int *p = find(a, a+n, 5);

	cout<<*iter<<"\n";
	cout<<*p;

	return 0;
}