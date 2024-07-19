#include <bits/stdc++.h>
using namespace std;

int first_pos(vector<int> v, int n, int x){
	int l = 0, r = n-1, res = -1;
	while(l<=r){
		int mid = (l+r) / 2;
		if(v[mid] == x){
			res = mid;
			r = mid - 1;
		} else if(v[mid] > x){
			r = mid - 1;
		} else {
			l = mid + 1;
		}
	}
	return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,x; cin>>n>>x;
    vector<int> v(n);
    for(int &x : v)
    	cin>>x;

    cout<<first_pos(v, n, x);

    return 0;
}