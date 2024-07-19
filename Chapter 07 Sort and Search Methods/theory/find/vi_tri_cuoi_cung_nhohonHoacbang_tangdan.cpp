#include <bits/stdc++.h>
using namespace std;

int func(vector<int> v, int n, int x){
	int l = 0, r = n-1, res = -1;
	while(l<=r){
		int mid = (l+r)/2;
		if(v[mid] <= x){
			res = mid;
			l = mid + 1;
		} else {
			r = mid - 1;
		}
	} 
	return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    return 0;
}