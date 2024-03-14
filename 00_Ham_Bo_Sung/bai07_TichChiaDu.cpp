#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n; cin>>n;
	ll mul = 1, mod = 10e9 + 7;
	for(int i=1; i<=n; i++){
		int N; cin>>N;
		mul *= N % mod;
	}
	cout<<mul % mod;
	return 0;
}