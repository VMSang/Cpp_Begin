#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool check(int n){
	long long *a = new long long[92];
	a[1]= 1; a[2] = 1;
    int fn = a[1] + a[2];
	for(int i=3; i<=92; i++){
		a[i]= a[i-2] + a[i-1];
		a[i-2] = a[i-1];
		a[i-1] = a[i];
		if (n == fn)
			return true;
	}
	return false;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	

	return 0;
}