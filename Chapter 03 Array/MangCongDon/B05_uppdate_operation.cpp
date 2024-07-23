#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);

    int n, q; cin>>n>>q;
    vector<int> v(n), d(n+1), f(n);

    for(int &x : v)
    	cin>>x;

    for(int i=0; i<n; i++){
    	if(i == 0) d[i] = v[i];
    	else {
    		d[i] = v[i] - v[i-1];
    	}
    }

    while(q--){
    	int l, r, k; cin>>l>>r>>k;

    	d[l] += k;
    	d[r+1] -= k;
    }

    for(int i=0; i<n; i++){
    	if(i == 0) f[i] = d[i];
    	else {
    		f[i] = f[i-1] + d[i]; 
    	}
    	cout<<f[i]<<" ";
    }

    /* khong can dung mang f
    long long tong = 0;
    for(int i=0; i<n; i++){
		tong += d[i];
		cout<<tong<<"\n";
    }
    */

    return 0;
}