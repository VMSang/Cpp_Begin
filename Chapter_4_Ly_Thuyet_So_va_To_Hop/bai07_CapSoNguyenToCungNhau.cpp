#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int gcd(int a, int b){
	int res = a%b;
	while(b){
		int du = a%b;
		a = b;
		b = du;
	}
	return a;
}

int main(){
	int a,b; cin>>a>>b;
	for(int i = a; i<=b; i++){
		for(int j = i + 1; j<=b; j++){
			if(gcd(i,j) == 1) cout<<"("<<i<<","<<j<<")"<<endl;
		}
	}
	return 0;
}

// viet lai lan 2:
int gcd(ll a, ll b){
	while(b){
		int du = a%b;
		a = b;
		b = du;
	}
	return a;
}

//int main(){
//	int a,b; cin>>a>>b;
//	for (int i=a; i<=b; i++){
//		for (int j=i+1; j<=b; j++){
//			if (gcd(i, j))
//				cout<<"("<<i<<","<<j<<")"<<endl;
//		}
//	}
//	return 0;
//}