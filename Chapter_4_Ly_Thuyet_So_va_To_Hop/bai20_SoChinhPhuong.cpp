#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	ll n; cin>>n;
	ll temp = sqrt(n);
	if (temp * temp == n) cout << "YES";	//khong lam if (sqrt(n) == (int) sqrt(n)) khong bao gio duoc so sanh so nguyen voi so thuc, vi so thuc được lưu làm tròn kh hết 100%, ví dụ lưu tới 18 số, trường hợp nhiều hơn thì sao?
	else cout<<"NO";
	return 0;
}