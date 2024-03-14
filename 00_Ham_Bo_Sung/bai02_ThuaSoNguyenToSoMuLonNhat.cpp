#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	ll n; cin>>n;
	ll _max = 0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i == 0){
			_max = max(i, _max)
			while(n%i == 0){
				n/=i;
			}
		}
		if(n>1)
			_max = max(n, _max);
	}
	cout<<_max;
	return 0;
}