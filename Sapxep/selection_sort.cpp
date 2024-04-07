/*
	username: Minh Sang
*/
#include <bits/stdc++.h>
//======================================
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define sz size
#define mp make_pair
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define ull unsigned long long
#define vi vector<int>
#define vll vector<long long>
#define vdb vector<double>
using namespace std;
//======================================
//O(n^2)
//ý tưởng: moi buoc se đưa phần tử nhỏ nhất chua sắp xếp về đầu dẫy
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

//advanced: https://stackoverflow.com/questions/52793259/advanced-selectionsort-search-two-elements-in-one-iteration

int main(){ 
	
	return 0;
}