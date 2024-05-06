#include <bits/stdc++.h>
using namespace std;
using ll = long long;

//trong c++ không thể sàn số lớn hơn 10^7
const int maxn = 1e7 + 1;
int arr[maxn];
void sangSNT(){
	arr[0] = arr[1] = 0;
	for (int i = 2; i <= maxn; ++i)
	{
		arr[i] = 1;
	}
	for (int i = 2; i <= sqrt(maxn); ++i)
	{
		if (arr[i] == 1)
		{
			for (int j = i*i; j <= maxn; j+=i)
			{
				arr[j] = 0;
			}
		}
	}
}

bool csnt(int n){
	while (n!=0){
		int res = n%10;
		if(res!= 2 && res!= 3 && res!= 5 && res!= 7) return false;
		n /= 10;
	};
	return true;
}

//cach 2: khong dung san
bool Prime(ll n){
	for(int i=2; i<=sqrt(n); i++){
		if(n%i == 0)
			return false;
	}
	return n>1;
}

bool csnt2(ll n){
	while(n!=0){
		int r = n%10;
		if(r != 2 && r!= 3 && r!= 5 && r!= 7)
			return false;
		n/=10;
	}
	return true;
}
int main(){
	int a,b; cin>>a>>b;
	int dem = 0;
	sangSNT();
	for (int i = a; i <= b; ++i){
		if(arr[i] == 1 && csnt(i)) dem++;
	}
	cout<<dem;	
	//main cach2
	for(int i=a; i<=b; i++){
		if (csnt(i) && Prime(i)){
			dem ++;
		}
	}
	cout<< dem;
	return 0;
}