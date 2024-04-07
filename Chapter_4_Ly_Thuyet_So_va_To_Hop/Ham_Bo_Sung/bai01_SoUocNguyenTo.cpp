#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
	ll n; cin>>n;
	int count = 0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i == 0){
			count++;
			while(n%i == 0){
				n/=i;
			}
		}
		if(n>1) count++;
	}
	cout<<count<<" ";
	return 0;
}