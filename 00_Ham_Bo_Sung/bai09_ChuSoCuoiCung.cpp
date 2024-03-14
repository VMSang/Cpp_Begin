#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n,m,k; cin>>n>>m>>k;
	int du = 1;
	ll mu = pow(10,k);
	for(int i=1; i<=m; i++){
		du*=n;
		du%=mu;
	}
	cout<<du;

	return 0;
}