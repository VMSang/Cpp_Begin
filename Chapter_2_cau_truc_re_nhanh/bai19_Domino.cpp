#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	ll m ,n; cin>>m>>n;
	if (m%2 == 0){
		//co chan hang
		ll res = m/2 * n;
		cout<<res;	
	}
	else{
		ll res2 = (m/2 *n) + n/2;
		cout<<res2;
	}

	//cach 2:  ll sum = m/2 * n + (m%2)(n/2);
	return 0;
}