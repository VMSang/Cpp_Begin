#include <bits/stdc++.h>
using namespace std;

using ll = long long;


void primeFactorization(ll n){
	for (int i = 2; i*i <= n; i++)
	{
		while (n%i == 0)
		{
			n/=i;
			cout<<i<<" ";
		}
	}
	if (n>1)
	{
		cout<<n;
	}
}
//Cách 1 : Chỉ in ra các thừa số nguyên tố khác nhau của N mỗi thừa số 1 lần
void pt1(int n){
	for(int i=2; i<=sqrt(n); i++){
		if(n%i == 0){
			cout<<i<<" ";
			while(n%i == 0){
				n/=i;
			}
		}
	}
	if (n>1) //là thừa số cuối cùng luôn có mũ = 1, chỗ này in ra cái dư cuối
		cout<<n;
}
//Cách 2 : In ra các thừa số nguyên tố kèm theo số mũ
void pt2(int n){
	for(int i=2; i<=sqrt(n); i++){
		if(n%i == 0){
			//khai bao trong day de reset lai
			int mu = 0;
			while(n%i == 0){
				n/=i;
				mu++;
			}
			cout<<"("<<i<<","<<mu<<")"<<" ";
		}
	}
	if (n>1)
		cout<<"("<<n<<","<<"1"<<")"<<" ";
}

//Cách 3 : In ra các thừa số nguyên to
void pt3(int n){
	for(int i=2; i<=sqrt(n); i++){
		if(n%i == 0){
			while(n%i == 0){
				n/=i;
				cout<<i<<" x ";
			}
		}
	}
	if (n>1)
		cout<<"x"<<n;
}
int main(){
	int n; cin>>n;
	pt1(n); cout<<endl;
	pt2(n); cout<<endl;
	pt3(n); cout<<endl;
	return 0;
}

