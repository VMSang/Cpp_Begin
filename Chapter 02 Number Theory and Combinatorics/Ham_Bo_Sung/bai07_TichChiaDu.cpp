#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
	// int n; cin>>n;
	// ll mul = 1, mod = 1e9 + 7;
	// for(int i=1; i<=n; i++){
	// 	int N; cin>>N;
	// 	mul *= N % mod;
	// }
	// cout<<mul % mod;

	// int n; cin>>n;
	// ll mul = 1, mod = 1e9 + 7;
	// for(int i=0; i<n; i++){
	// 	int x; cin>>x;
	// 	mul = ((mul%mod)*(x%mod))%mod;
	// }
	// cout<<mul;

	int n; cin>>n;
	ll mil = 1, mod = 1e9 +7;
	for(int i=0; i<n; i++){
		int x; cin>>x;
		mil = mil * x % mod;
		mil %= mod;
	}
	cout<<mil;
	return 0;
}
