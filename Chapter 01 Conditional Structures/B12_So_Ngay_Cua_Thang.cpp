#include <bits/stdc++.h>
using namespace std;

int main(){
	int t, n; cin>>t>>n;

	if((t>= 1 && t<=12) && (n>0)){
		if( t == 1 || t == 3 || t == 5 || t ==7 || t == 8 || t ==10 || t ==12) cout<<31;
		else if (t== 4 || t== 6 || t==9 || t==11) cout<<30;
		else if (n%400 == 0 || (n%4 == 0 && n%100 !=0)) cout<<29;
		else cout<<28;
	}
	else cout<<"INVALID";
	return 0;
}