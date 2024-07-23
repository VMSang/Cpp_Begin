#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    int n, q; cin>>n>>q;
    vector<int> v(n);
    for(int &x : v)
    	cin>>x;

    vector<int> d(n+1);
    while(q--){
    	int l, r; cin>>l>>r;
    	l--; r--;
    	d[l] += 1;
    	d[r+1] -= 1;
    }


    //luu so lan xau hien
    vector<int> f(n);
    for(int i=0; i<n; i++){
    	if(i == 0) f[i] = d[i];
    	else {
    		f[i] = f[i-1] + d[i];
    	}
    }

    sort(v.begin(), v.end());
    sort(f.begin(), f.end());

    long long ans = 0;
    for(int i=0; i<n; i++){
    	ans +=1ll * v[i] * f[i];
    }
    cout<<ans;

    return 0;
}