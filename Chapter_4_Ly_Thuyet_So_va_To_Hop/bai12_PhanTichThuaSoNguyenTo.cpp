#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void phantich(ll n)
{
	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			int mu = 0;
			while (n % i == 0)
			{
				n /= i;
				++mu;
			}
			cout << i << "^" << mu;
			if (n != 1)
				cout << " * ";
		}
	}
	if (n > 1)
		cout << n << "^1";
}
int main()
{
	ll n;
	cin >> n;
	phantich(n);
	return 0;
}