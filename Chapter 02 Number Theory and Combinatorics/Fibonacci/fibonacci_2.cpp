//kiem tra so n co phai so fibonacci khong
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
set<ll>se;
ll fi[93];
void checkFi(){
	fi[0] = 0; fi[1] = 1; fi[2] = 1;
	se.insert(0); se.insert(1);
	for(int i = 3; i<=93; i++){
		fi[i] = fi[i-1] + fi[i-2]; 
		se.insert(fi[i]);
	}
}

bool checFi2(ll n){
	ll f1 = 1, f2 = 1, fn;
	if(n==0 || n ==1)
		return true;
	for(int i=3; i<=93; i++){
		fn = f1 + f2;
		f1 = f2;
		f2 = fn;
		if(fn == n)
			return true;
	}
	return false;
}
int main(){ 
	int n; cin>>n;
	if(checFi2(n))
		cout<<"yes";
	else
		cout<<"no";
	//cach 2
	checkFi();
	if(se.count(n))
		cout<<"yes";
	else
		cout<<"no";
	return 0;
}