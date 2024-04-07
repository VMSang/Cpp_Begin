/*
	username: Minh Sang
*/
#include <bits/stdc++.h>
//======================================
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define sz size
#define mp make_pair
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define ull unsigned long long
#define vi vector<int>
#define vll vector<long long>
#define vdb vector<double>
using namespace std;
//======================================
bool checkFi(ll n){
	if(n<=1)
		return false;
	ll a = 1, b = 2;
	while(b<n){
		ll tmp = b;
		b = a+b;
		a = tmp;
	}
	return b == n;
}
int main(){ 
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		if(checkFi(n))
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
	}
	return 0;
}