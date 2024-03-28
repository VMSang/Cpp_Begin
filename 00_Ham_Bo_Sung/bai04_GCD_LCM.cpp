#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int gcd(int a, int b){
	if (b == 0)
		return a;
	return gcd(b, a%b);
}

int lcm(int a, int b){
	return a*b / gcd(a,b); 
}
int main(){
	int a,b,c,d; cin>>a>>b>>c>>d;
	int ucln = gcd(gcd(a,b),gcd(c,d));
	cout<<ucln<<" ";
	int bcnn = lcm(lcm(a,b), lcm(c,d));
	cout<<bcnn;
	return 0;
}
