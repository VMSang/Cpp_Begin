#include <bits/stdc++.h>

using namespace std;

//khong dung mang danh dau duoc vi la so am
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 	int n; cin>>n;
 	int a[n];
 	for(int &x:a) cin>>x;
 	int min_value = INT_MAX;
 	for(int i=0; i<n; i++){
 		if(a[i] < min_value)
 			min_value = a[i];
 	}
 	int cnt = 0;
 	for(int i=0; i<n; i++){
 		if(a[i] == min_value)
 			cnt ++;
 	}
 	cout<<cnt;
    return 0;
}

