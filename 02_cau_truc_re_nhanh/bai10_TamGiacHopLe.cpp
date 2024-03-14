#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c; cin>>a; cin>>b; cin>>c;
	if (a+b>c && a+c>b && b+c>a) cout<<"YES";
	else cout<<"NO";	
	return 0;
}