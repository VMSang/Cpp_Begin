#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int n; cin>>n;
	cout << n/365 <<" "<< n%365 / 7 <<" "<< n%365 % 7;	 	
	return 0;
}