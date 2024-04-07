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
		
	return 0;
}