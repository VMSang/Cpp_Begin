#include <bits/stdc++.h>
using namespace std;

long long f[1000005];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
	f[0] = 0;
	f[1] = 1;
	for(long i = 2; i <= 1000005; i++){
		f[i] = ((f[i-1]%1000000007)+ (f[i-2]%1000000007)) % 1000000007;
	}

	int q; cin>>q;
	while(q--){
		int n; cin>>n;
		cout<<f[n] %1000000007 <<"\n";
	}
    return 0;
}