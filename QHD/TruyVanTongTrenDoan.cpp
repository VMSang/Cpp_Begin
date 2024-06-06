#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll f[1000001];

int main() {    
 	int n; cin>>n;
 	int a[n];
 	for(int i=0; i<n; i++){
 		cin>>a[i];
 	}   
 	f[0] = a[0];
 	for(int i=1; i<n; i++){
 		f[i] = a[i] + f[i-1];
 	}
 	int t; cin>>t;
 	while(t--){
 		int l, r; cin>>l>>r;
 		if ((l-1) == 0) cout<<f[r-1];
 		else cout<<f[r-1] - f[l-2];
 	}
    return 0;
}