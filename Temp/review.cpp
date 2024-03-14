// #include <bits/stdc++.h>
// using namespace std;

// using ll = long long;

// ll check(ll l, ll r, ll k){
// 	int m = 2; ll ans = 0; ll dem = 0;
// 	for(int i=l; i<=r; i++){
// 		//xet qua tung so
// 		while(m--){
// 			int n = i%10;
// 			ans = 10 * ans + n;
// 			i/=10;
// 			m++;
// 		}
// 		if(ans == k)
// 			dem++;
// 	}
// 	return dem;
// }

// int main(){
// 	ios::sync_with_stdio(false);
// 	cin.tie(nullptr);
// 	ll l, r, k; cin>>l>>r>>k;
// 	cout<<check(l,r,k);
// 	return 0;
// }

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool Prime(ll n){
	for(int i=2; i<=sqrt(n); i++){
		if(n%i == 0)
			return false;
	}
	return n>1;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	ll T, N; 
	cin>>T;
	while(T--){
		cin>>N;
		while(N--){
		if(Prime(N--))
			cout<<N;
		}
	}
	return 0;
}