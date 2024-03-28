#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	ll a,b; cin>>a>>b;
	ll x = sqrt(a);
	ll y = sqrt(b);
	if(x*x != a)
		x++;
	cout << y - x + 1;
	return 0;
}