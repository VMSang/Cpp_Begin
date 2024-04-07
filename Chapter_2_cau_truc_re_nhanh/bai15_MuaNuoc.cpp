#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	ll n,a,b; cin>>n>>a>>b;
	if (a*2 < b) cout<<n*a;
	else cout<<(n/2)*b + (n%2)*a;
	return 0;
}