#include <bits/stdc++.h>
using namespace std;

using ll = long long;

// có thể tính toán các phần tử trên tam giác pascal bằng tổ hợp. Ví dụ tam giác pascal có chiều cao là 4 :
// C(0,0)
// C(0,1) C(1,1)
// C(0,2) * C(1,2) * C(2,2)
// C(0,3) * C(1,3) * C(2,3) * C(3,3)
// Trong đó C(i,j) là tổ hợp chập j của i

ll giaithua(ll n){
	ll res = 1;
	for(int i=1; i<=n; i++){
		res *= i;
	}
	return res;
}

ll C(int n, int k){
	return giaithua(n) / (giaithua(k) * giaithua(n-k));
}

int main(){
	int n; cin>>n;
	for(int i=0; i<n; i++){
		for(int j=0; j<=i; j++){
			cout<<C(i,j)<<" ";
		}
		cout<<endl;
	}
	return 0;
}

