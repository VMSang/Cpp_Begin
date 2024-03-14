#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void converToBinary(int n){
	if(n<2)
		cout<<n%2;
	else {
		converToBinary(n/2);
		cout<<n%2;
	}
}

void converToBinary2(ll n){
	if(n/2 != 0)
		converToBinary2(n/2);
	cout<<n%2;
}

void converToBinaryNoRecursion(int n){
	int n2, bit, count = 0;
	int *arr;
	n2 = n; // lưu lại n ban đầu để xíu còn dùng
	// dem số lượng bit cua n thong qua count 
	while(n!=0){
		n/=2;
		count++;
	}
	int count2 = count;
	arr = new int[count];
	n = n2; // tra lai so n ban dau
	while(n!=0){
		bit = n%2;
		n/=2;
		*(arr + count -1) = bit;
		count--;
	}
	// in bit da tim
	for(int i=0; i<count2; i++){
		cout<<*(arr + i);
	}
	delete[] arr;
}

ll nCk(ll n, ll k){
	if(k == 0 || n == k )
		return 1;
	return nCk(n-1, k) + nCk(n-1, k-1);
}

ll giaithua(ll n){
	ll result = 1;
	for(ll i=1; i<=n; i++){
		result*=i;
	}
	return result;
}

ll nCkNoRescursion(ll n, ll k){
	return giaithua(n) / ((giaithua(k) * giaithua(n-k)));
}

ll length(const char* str){
	if(*str == '\0')
		return 0;
	return 1 + length(str + 1);
}
long double bai4by_n(long double n);
long double bai4bx_n(long double n){
	if (n == 0)
		return 1.0;
	return bai4bx_n(n-1) / 3.0 + bai4by_n(n-1) / 2.0 + 27.0;

}
long double bai4by_n(long double n){
	if (n == 0)
		return 2.0;
	return bai4bx_n(n-1) / 5.0 + bai4by_n(n-1) / 7.0 + 11.0;

}

int bai5b_fn(int n){
	if(n == 1 || n == 2)
		return 1;
	return bai5b_fn(n-1) + bai5b_fn(n-2);
}

int bai5b_Sn(int n){
	if (n == 1)
		return 1/2;
	else if(n == 2)
		return 2/(1+1);
	else
		return bai5b_Sn(n-1) + n*1.0/(1+bai5b_fn(n));
}
//BAI TAP MO RONG
// tinh tong snt trong mang
bool Prime(int n){
	for(int i=2; i<=sqrt(n); i++){
		if(n%i == 0)
			return false;
	}
	return n>1;
}

int demsnt(int *a, int n){
	int dem = 0;
	if(prime(a[n]))
		dem++;
	return a[n--];
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	// const char* str = "Hello";
	// cout << length(str);

	// int n; cin>>n
	// double x[n+1], y[n+1];
	// x[0] = 1;
	// y[0] = 2;
	// for(int i=1; i<=n; i++){
	// 	x[i] = x[i-1] / 3 + y[i-1] / 2 + 27;
    //  y[i] = x[i-1] / 5 + y[i-1] / 7 + 11;
	// }

	//4c
	// int n; cin>>n;
	// int x = 1, y = 2;
	// for(int i=1; i<=n; i++){
	// 	double ansx = x;
	// 	double ansy = y;

	// 	x = ansx / 3.0 + ansy / 2.0 + 27.0;
    //  y = ansx / 5.0 + ansy / 7.0 + 11.0; 
	// }

	//cau5a
	// int n; cin>>n;
	// double *a;
	// a = new double[n];
	// a[0] = 1;
	// a[1] = 1;
	// for (int i = 2.0; i < n; ++i){
	// 	a[i] = i/(1+ (a[i-1] + a[i-2]));
	// }
	// double Sn = 1/(1+a[0]) + 2/(1+a[1]);
	// for(int i=2; i<n; i++){
	// 	Sn += a[i];
	// }
	// cout<<Sn;

	// cau5b
	// cout<<bai5b_Sn(3.0);

	// converToBinary(36);
	int n; cin>>n;
	int *a = new int[n];
	for(int i=0; i<n; i++);
	cout<<demsnt(*a, n);
	return 0;
}