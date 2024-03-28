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
	if (n<=1)
		return false;
	ll a = 1, b = 2;
	while (b<n){
		ll tmp = b;
		b = a+b;
		a=tmp;
	}
	return b==n;
}
bool checkSnt(ll n){
	if (n==2 || n==3)
		return true;
	if (n<3 || n%2==0 || n%3==0)
		return false;
	for(int i=5; i*i<=n; i+=6){
		if(n%i==0 || n%(i+2)==0)
			return false;
	}
	return true;
}

ll checkSum(ll n){
	ll sum = 0;
	while(n!=0){
		sum += n%10;
		n/=10;
	}
	return checkFi(sum);
}
int main(){ 
	int n; cin>>n;
	for(int i=2; i<n; i++){
		if (checkSnt(i)&&checkSum(i))
			cout<<i<<" ";
	}	
	return 0;
}