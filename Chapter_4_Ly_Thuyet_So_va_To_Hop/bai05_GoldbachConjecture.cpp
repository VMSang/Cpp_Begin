// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;

// const int maxn = 1e6 +1;
// int prime[maxn];
// void sangSNT(){
// 	prime[0] = prime[1] = 0;
// 	for (int i = 2; i < maxn; ++i){
// 		prime[i] = 1;
// 	} 
// 	for(int i = 2; i<=sqrt(maxn); i++){
// 		if (prime[i] == 1){
// 			for(int j = i*i; i<=maxn; j+=i){
// 				prime[j] = 0;
// 			}
// 		}
// 	}
// }

// int main(){
// 	sangSNT();
// 	int T; cin>>T;
// 	while(T--){
// 		int n; cin>>n;
// 		for(int i = 2; i<=n/2; i++){
// 			if (prime[i]){			//tach dieu kien if ra de khi i kh phai snt thì kh check cai con lai, tránh loi Segmentation Fault
// 				int b = n -i;
// 				if(prime[b]){
// 					cout<< i << " " << b;
// 				}
// 			}
// 		}	
// 	};
// 	return 0;
// }

//lam lai lan 2
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool prime(int n){
	for(int i=2; i<= sqrt(n); i++){
		if(n%i == 0)
			return false;
	}
	return n>1;
}

int main(){
	int T; cin >> T;
	while(T--){
		int n; cin>>n;
		for(int i=2; i<=n/2; i++){
			if(prime(i)){
				int b = n-i;
				if(prime(b))
					cout<< i << " " << b<<endl;
			}
		}
	}

	return 0;
}