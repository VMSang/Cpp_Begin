#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;

//(a*b)%c
int mod(ull a, ull b, ull c){
	ull s =0;
	while(b>0){
		if(b&1){
			s = (s + a) % c;
		}
		a = (a << 1) % c; // a*2
		b = b >> 1; //b/2
	}
	return s;
}

//(a^b)%c
int power( ull a , ull b , ull c){
	ull s = 1;
	while(b>0){
		if(b&1){
			s = (s * a) % c;
		}
		a = (a * a) % c;
		b = b >> 1;

	}
	return s;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout<<power(2,10,7);
	return 0;
}