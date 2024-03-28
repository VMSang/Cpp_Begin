#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int n,a,b; cin>>a>>b;
	for(ll i=sqrt(a); i<=sqrt(b); i++){
		ll tmp = i*i;
		if (tmp>=a && tmp<=b)
			cout<<tmp<<" ";
	}	
	return 0;
}