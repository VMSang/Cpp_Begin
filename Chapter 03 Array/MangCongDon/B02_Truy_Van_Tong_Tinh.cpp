#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);

	int n,q; cin>>n>>q;
    vector<int> v(n), f(n);
    for(int &x:v)
    	cin>>x;
    for(int i=0; i<n; i++){
    	if(i == 0) f[i] = v[i];
    	else {
    		f[i] = f[i-1] + v[i];
    	}
    }

    while(q--){
    	int l,r; cin>>l>>r;
    	if(l != 0)
    		cout<<f[r]-f[l-1]<<"\n";
    	else
    		cout<<f[r]<<"\n";
    }
    return 0;
}