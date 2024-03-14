#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll giaithua(ll n){
	ll res = 1;
	for(int i=1; i<=n; i++){
		res *= i;
	}
	return res;
}

ll C(int n, int k){
	return giaithua(n) / (giaithua(k) * giaithua(n-k));
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n; cin>>n;
	for(int i=0; i<n; i++){
		for(int j=0; j<=i; j++){
			cout<<C(i,j)<<" ";
		}
		cout<<endl;
	}
	return 0;
}