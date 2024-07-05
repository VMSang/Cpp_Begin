#include <bits/stdc++.h>
using namespace std;

const int maxSize = 1e6 +1;
vector<bool> v(maxSize, true);

void sieve(){
	v[0] = v[1] = false;
	for(int i=2; i*i<=maxSize; i++){
		if(v[i]){
			for(int j=i*i; j<=maxSize; j+=i){
				v[j] = false;
			}
		}
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n; cin>>n;
    sieve();
    long long ans = 0;
    for(long long i=2; i*i<n; i++){
    	if(v[i]){
    		ans++;
    	}
    }
    cout<<ans;
    return 0;
}