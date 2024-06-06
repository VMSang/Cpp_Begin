#include <bits/stdc++.h>
using namespace std;
//O(n^2)
//ý tưởng: moi buoc se đưa phần tử nhỏ nhất chua sắp xếp về đầu dẫy
//advanced: https://stackoverflow.com/questions/52793259/advanced-selectionsort-search-two-elements-in-one-iteration

void selectionSort(int a[], int n){
	for(int i=0; i<n-1; i++){
		int min_pos = i;
		for(int j=i+1; j<n; j++){
			if (a[j] <  a[min_pos]) //giam dan >
				min_pos = j;
		}
		swap(a[min_pos], a[i]);
	}
}

int main(){
	int a[1000];
	int n; cin>>n;
	srand(time(NULL));
	for(int i=0; i<n; i++){
		a[i] = rand() % 1000;
	}
	// int a[n] = {4,8,1,3,10,6,5,7,9,2};
	selectionSort(a, n);
	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
