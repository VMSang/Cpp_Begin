#include <bits/stdc++.h>
using namespace std;
//O(n^2)
// tu tuong: so sanh hai phần tử kế nhau, dua phan tu lon nhat ve cuoi day
//advanced: https://www.studytonight.com/cpp-programs/cpp-program-for-bubble-sort-optimized

void bubbleSort(int a[], int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<n-i-1; j++){		//lấy trước đó so với phía sau, nên có n=5 (4pt) thì j đến pt3 là đủ để so với pt4 => trừ đi 1, trừ i pt đã xếp đúng
			if(a[j] > a[j+1])
				swap(a[j], a[j+1]);
		}
	}
}
int main(){ 
	int n = 10;
	int a[n] = {4,8,1,3,10,6,5,7,9,2};
	bubbleSort(a, n);
	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
	return 0;
}