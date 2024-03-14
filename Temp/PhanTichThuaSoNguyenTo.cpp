#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int mod = 1000000007;
	int N; cin>>N;
	long long tong = 0;
	for(int i=1; i<=N; i++){
		int n; cin>>n;
		tong+=n%mod;
		tong%=mod;
	}
	tong %= mod;
	cout<<tong;
	return 0;
}