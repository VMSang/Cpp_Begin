#include <bits/stdc++.h>
using namespace std;

const int maxN = 1000005;

long long f[maxN];
bool prime[maxN];

void sang(){
	prime[0] = prime[1] = 1;
	for(int i=2; i*i <= maxN; i++){
		if(prime[i] == 0){
			for(int j=i*i; j<maxN; j+=i)
				prime[j] = 1;
		}
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
   	
   	sang();
   	
    f[0] = 0;
    for(int i=1; i<maxN; i++){
    	if(prime[i] == 0){
    		f[i] = f[i-1] + 1;
    	} 
    	else {
    		f[i] = f[i-1];
    	}
    }

    int q; cin>>q;
    while(q--){
    	int n; cin>>n;
    	cout<<f[n]<<"\n";
    }
    return 0;
}