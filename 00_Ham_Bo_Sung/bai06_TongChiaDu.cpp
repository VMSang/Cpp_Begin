#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n; cin>>n;
	ll sum = 0; ll mod = 10e9 + 7;
	for(int i=1; i<=n; i++){
		int N; cin>>N;
		sum += (N%mod);
	}
	cout<<sum%mod;
	return 0;
}