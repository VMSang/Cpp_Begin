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
//O(N + K)
//tu tuong: 
//dieu kien: biết giá trị lớn nhất (không quá khả năng để khai báo mảng) trong mảng để khai báo mảng có K(giá trị lớn nhất trong mảng) + 1 phần tử; 
//các giá trị không âm
int dem[1000001];
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
	int n; cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	countingSort(a,n);
	return 0;
}