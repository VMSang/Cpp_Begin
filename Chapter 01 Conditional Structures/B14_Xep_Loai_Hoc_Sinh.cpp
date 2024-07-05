#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	float a,b,c,d; cin>> a >> b >> c >>d;
	float dtb = a+b+c*2+d*3;
	dtb /= 7; //thực
	if(dtb>=8) cout<<"GIOI";
	else if (dtb>=6.5) cout<<"KHA";
	else if (dtb>=5.0) cout<<"TRUNG BINH";
	else cout<<"YEU";
	return 0;
}