#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n; cin>>n;
	ll res = 1, mod = 10e9+7;
	for(int i=1; i<=n; i++){
		res *= i;
		res %= mod;
		cout<<res<<endl;		
	}
	return 0;
}