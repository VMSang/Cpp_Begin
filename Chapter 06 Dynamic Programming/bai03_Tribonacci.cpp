#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll F[1000005];
ll mod = 1e9 + 7;

int main() {    
	F[0] = 0;
	F[1] = 1;
	F[2] = 1;
	for(int i=3; i<1000001; i++){
		F[i] = F[i-1] + F[i-2] + F[i-3];
		F[i] %= mod;
	}
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		cout<<F[n]<<endl;
	}

    return 0;
}