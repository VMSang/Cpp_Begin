#include <bits/stdc++.h>
using namespace std;

using ll = long long;

//code trau
bool sohoanhao(ll n){
	ll sum = 1;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i == 0)
			sum+=i;
		if(i!=n/i)
			sum+=n/i;
	}
	return sum == n;
}

//phi ham euler: p: là snt, và 2^p - 1 cũng là snt thì 2^(p-1) * s^p -1 == số hoàn hảo
bool sohoanhao2(ll n){

}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	return 0;
}