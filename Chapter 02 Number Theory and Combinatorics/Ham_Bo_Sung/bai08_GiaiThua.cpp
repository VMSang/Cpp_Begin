#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
	int n; cin>>n;
	ll res = 1, mod = 10e9+7;
	for(int i=1; i<=n; i++){
		res *= i;
		res %= mod;
		cout<<res<<endl;		
	}
	return 0;
}