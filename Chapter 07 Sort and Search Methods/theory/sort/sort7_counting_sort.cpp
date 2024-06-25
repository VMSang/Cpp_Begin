#include <bits/stdc++.h>
using namespace std;
//O(N + K)
//tu tuong: 
//dieu kien: biết giá trị lớn nhất (không quá khả năng để khai báo mảng) trong mảng để khai báo mảng có K(giá trị lớn nhất trong mảng) + 1 phần tử; 
//các giá trị không âm
int dem[1000001]; // 0 <= a[i] <= 10^6
void countingSort(int a[], int n){
	int k = -1e9;
	for(int i=0; i<n; i++){
		dem[a[i]]++;
		k = max(k, a[i]);
	}
	for(int i=0; i<=k; i++){
		if(dem[i]){
			for(int j=0; j<dem[i]; j++){
				cout<<i<<' ';
			}
		}
	}
}
int main(){ 
	int n = 10;
	int a[n] = {4,8,1,3,10,6,5,7,9,2};
	countingSort(a, n);
	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
	return 0;
}