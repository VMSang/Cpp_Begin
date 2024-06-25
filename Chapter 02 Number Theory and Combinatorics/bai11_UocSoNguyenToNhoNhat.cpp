#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void phantich(ll n){
	for(int i=2; i<=sqrt(n); i++){
		while(n%i == 0){
			cout<<i<<" ";
			n/=i;
		}
	}
}

//ap dung phan tich thua so nguyen to 
int phantich2(int n){
	//khong phai snt
	for(int i=2; i<=sqrt(n); i++){
		while(n%i == 0){
			n/=i;
			return i;
		}
	}
	//tu 2 -> can2 khong co uoc => n co the la snt
	//uoc nho nhat cua snt la snt
	if(n>1) return n;
	else return 1; //uoc nho nhat cua 1 la 1, khong ghi vi main da kiem tra truoc r
}
int main(){
	int n; cin>>n;
	for(int i=1; i<=n; i++){
		if(i == 1) 
			cout<<"1 ";
		else if((i%2 == 0))
			cout<<"2 ";
		else
			cout<<phantich2(i)<<" ";
	}
	return 0;
}
