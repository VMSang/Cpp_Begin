//O(logN)
//ap dung cho mang da sap xep
//tra ve true false

#include <bits/stdc++.h>
using namespace std;

bool binary_search(int a[], int n, int x){
	ll l = 0, r = n-1;
	while(l<=r){
		ll m = (l+r) / 2;
		if(a[m] == x)
			return true;
		else if(a[m]<x)
			l = m+1;
		else //(a[m]<x)
			r = m-1;
	}
	return false;
}

int firstPos(int a[], int n, int x){
	ll res = -1, l = 0, r = n-1;
	while(l<=r){
		int m = (l+r)/2;
		if(a[m] == x){
			res = m; //luu lai, tim them ben trai
			r = m-1; // neu tim lastPos thi: l = m+1
		}
		else if(a[m] < x)
			l = m+1;
		else
			r = m-1;
	}
	return res;
}
int main(){ 
	int n = 8;
	int a[] = {1,5,6,8,9,15,65,89};
	if(binary_search(a,8,65))
		cout<<"yes";
	else
		cout<<"no";
	//lower bound: vị trí có giá trị >= x
	auto pos = lower_bound(a, a+n, 9); //a+n để tránh truy cập ngoài phạm vi của mảng, trả về con trỏ, nếu kh có thì trả về a+n
	cout<<*pos<<' '; //in ra gia tri pos = a + index of value(9)
	cout<<pos-a<<' '; //in ra vi tri
	/*
	vector<int> a = {1,5,6,8,9,15,65,89}; //trả về interator, nếu kh có thì trả về a.end()
	auto pos = lower_bound(a.begin(), a.end(), 9);
	cout<<*pos<<' '; //in ra gia tri pos = a + index of value(9)
	cout<<pos-a.begin<<' '; //in ra vi tri
	*/

	//uper_bound: lấy ra địa chỉ > X
	return 0;
}