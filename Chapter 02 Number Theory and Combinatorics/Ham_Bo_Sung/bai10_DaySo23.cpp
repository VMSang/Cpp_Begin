#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll day23(ll n){
	ll a = 1, b = 1, c;
	if (n==1 || n==2){
    return 1;
}
	else for (int i=3; i<=n; i++){
		c = 2 * b + 3 * a;
		c %= (ll)(1e9+7);
		a = b;
		b = c;
	}
	return c;
}
int main(){
	int n; cin>>n;
	cout<<day23(n);
	return 0;
}