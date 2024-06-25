#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {    
 	int a[] = {1,3,5,6,7,8,9};
 	int b[] = {2,4,5,12,45,68};
 	int n = 7, m = 6;
 	int i=0, j=0;
 	while(i<n && j< m){
 		if(a[i] <= b[j]){
 			cout<<a[i]<<" ";
 			i++;
 		} else{
 			cout<<b[j]<<" ";
 			j++;
 		}
 	}
 	while(i < n){
 		cout<<a[i];
 		i++;
 	}
 	while(j < m){
 		cout<<b[j]<<" ";
 		j++;
 	}
    return 0;
}