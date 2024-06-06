#include <bits/stdc++.h>
using namespace std;
//O(n^2)
//tu tuong: tìm vị trí phù hợp cho phần tử đang xét ở phía trước

void insertionSort(int a[], int n){
	for(int i=1; i<n; i++){
		int pos = i-1, value = a[i];
		while (pos>=0 && value < a[pos]){
			a[pos + 1] = a[pos];
			--pos;
		}
		a[pos + 1] = value;
	}
}

int main(){ 
	int n = 10;
	int a[n] = {4,8,1,3,10,6,5,7,9,2};
	insertionSort(a, n);
	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
	return 0;	
}