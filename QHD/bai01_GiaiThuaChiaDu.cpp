#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int mod = 1e9 + 7;
ll F[1000000];

int main() {  
	F[0] = 1;
	F[1] = 1;
	for(int i = 2; i<1000000; i++){
		F[i] = i * F[i-1];
		F[i] %= mod;
	}
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		cout<<F[n]<<endl;
	}    
    return 0;
}