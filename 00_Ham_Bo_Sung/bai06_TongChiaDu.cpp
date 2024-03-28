#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
	int n; cin>>n;
	ll sum = 0; ll mod = 10e9 + 7;
	for(int i=1; i<=n; i++){
		int N; cin>>N;
		sum += (N%mod);  
		sum %= mod;  //tong den dau chia du den do
	}
	cout<<sum;
	return 0;
}