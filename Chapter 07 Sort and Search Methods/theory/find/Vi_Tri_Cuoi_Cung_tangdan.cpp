//nấu cần dùng đếm trong đoan có bao nhiêu số x, first_pos - last_pos + 1;
//lưu ý không có thì cẩn thận
#include <bits/stdc++.h>
using namespace std;

int last_pos(vector<int> v, int n, int x){
	int l = 0, r = n-1, res = -1;
	while(l<=r){
		int mid = (l+r) / 2;
		if(v[mid] == x){
			res = mid;
			l = mid + 1;
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


    return 0;
}