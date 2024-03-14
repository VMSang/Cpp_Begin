#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	ll n, sum = 0; cin>>n;
	for(int i=1; i<=sqrt(n); i++){
		if(n%i == 0){
			sum+=i;
			if(n/i != i)
				sum+=n/i;
		}
	}	
	cout<<sum;
	return 0;
}