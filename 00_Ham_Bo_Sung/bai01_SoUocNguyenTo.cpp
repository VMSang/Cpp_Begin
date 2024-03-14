#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	ll n; cin>>n;
	int ans = 0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i == 0){
			ans++;
			while(n%i == 0){
				n/=i;
			}
		}
		if(n>1) ans++;
	}
	cout<<ans<<" ";
	return 0;
}

//ham phan tich thua só nguyen to

void phantich(ll n){
	for(int i=2; i<=sqrt(n); i++)
}