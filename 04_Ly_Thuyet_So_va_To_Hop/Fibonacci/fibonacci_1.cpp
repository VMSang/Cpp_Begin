#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n; cin>>n;
	ll f1 = 1, f2 = 1, fn;
	if(n==1)
		cout<<1<<" ";
	else if(n==2)
		cout<<1<<" "<<1;
	else{
		cout<<1<<" "<<1<<endl;
		while(n--){
			fn = f1 + f2;
			f1 = f2;
			f2 = fn;
			cout<<fn<<endl;
		}
	}
	return 0;
}