#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
	// int n; cin>>n;
	// ll f1 = 1, f2 = 2, fn;
	// cout<<f1<<endl<<f2<<endl; 
	// for(int i=1; i<n; i++){
	// 	fn = f1 + f2;
	// 	cout<<fn;
	// 	f1 = f2;
	// 	f2 = fn;
	// 	cout<<endl;
	// }
int n; cin>>n;
ll f1 = 1, f2 = 1, fn = f1 + f2;
if(n>=2)
	cout<<f1<<endl<<f2<<endl;
for (int i=3; i<=n; i++){
	fn = f1+f2;
	f1 = f2;
	f2 = fn;
	cout<<fn<<endl;
}
	return 0;
}

