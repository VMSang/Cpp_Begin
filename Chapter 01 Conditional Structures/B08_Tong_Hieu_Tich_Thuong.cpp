#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b; cin>>a; cin>>b;
	cout<< a + b<<endl;
	cout<< a-b<<endl;
	cout<< a*b<<endl;

	if (b == 0) cout<< "INVALID";
	else cout<<fixed<<setprecision(4)<< (double)a / b;
	return 0;
}