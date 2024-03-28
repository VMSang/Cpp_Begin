#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll powfixadvanced2(ll a, ll b, ll c){
	ll res = 1;
	while (b!=0){
		if (b%2 == 1){  
			res = ((res%c) * (a%c)) % c;
		}
		a = ((a%c)*(a%c))%c;
		b/=2;
	}
	return res;
}

int main(){
	ll a, b;
	cin>>a>>b;
	cout<<powfixadvanced2(a,b,1000000007);
	return 0;
}