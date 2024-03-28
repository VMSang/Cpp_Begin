#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool Prime(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return false;
	}
	return n > 1;
}

bool check(int n){
	int sum = 0;
	while(n){
		int res = n%10;
		sum += res;
		if(res != 2 && res != 3 && res != 5 && res != 7) return false;
		n /= 10;
	}
	return Prime(sum);
}

int main(){
	int a,b; cin >> a >> b;
	int sum = 0;
	for(int i = a; i<=b; i++){
		if (check(i)){		//goi ham nay truoc toi uu hon == if chỉ chạy khi tất cả điều kiện cùng đúng == if(check() && prime())
			if(Prime(i)){
				sum++;
			}
		}
	}	
	cout << sum;
	return 0;
}

//viet lai lan 2
//bool prime(int n){
//	for(int i=2 ;i<=sqrt(n); i++){
//		if(n%i == 0)
//			return false;
//	}
//	return n>1;
//}
//bool checkcsnt(int n){
//	int sum = 0;
//	while(n!=0){
//		int r = n%10;
//		if (r != 2 && r!= 3 && r!=5 && r!= 7)
//			return false;
//		sum+=r;
//		n/=10;
//	}
//	return prime(sum);
//}
//
//int main(){
//	int dem = 0;
//	int n; cin>>n;
//	for(int i=a; i<=b; i++){
//		if (checkcsnt(i) && prime(i))
//			dem++;
//	}
//	cout<<dem;
//}
//
//viet lai lan 3
//bool Pirme (ll n){
//	for (int i=2; i<=sqrt(n); i++){
//		if (n%i == 0)
//			return false;
//	}
//	return n>1;
//}
//
//bool checkcsntvasum(ll n){
//	int sum = 0;
//	while(n){
//		if (n%10 == 2 || n%10 == 3 || n%10 == 5 || n%10 == 7)
//			sum += n%10;
//		else return false;
//		n/=10;
//	}
//	return sum;
//}
//
//int main(){
//	int dem = 0;
//	for (int i=a; i<=b; i++){
//		if (checkcsntvasum(i) && Prime(i))
//			dem ++
//	}
//	cout<<dem;
//	return 0;
//}
