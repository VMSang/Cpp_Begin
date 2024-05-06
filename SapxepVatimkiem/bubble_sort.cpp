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
// tu tuong: so sanh hai phần tử kế nhau, dua phan tu lon nhat ve cuoi day
void bubbleSort(int a[], int n){
	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-i-1; j++){
			if(a[j] > a[j+1])
				swap(a[j], a[j+1]);
		}
	}
}

//advanced: https://www.studytonight.com/cpp-programs/cpp-program-for-bubble-sort-optimized
int main(){ 
		
	return 0;
}