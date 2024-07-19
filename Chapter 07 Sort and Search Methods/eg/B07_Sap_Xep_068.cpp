#include <bits/stdc++.h>
using namespace std;

int dem068(int n){
	int dem = 0;
	while(n){
		int digit = n%10;
		if(digit == 0 || digit == 6 || digit == 8)
			dem++;
		n/=10;
	}
	return dem;
}

bool cmp(int a, int b){
	if(dem068(a) != dem068(b))
		return dem068(a) > dem068(b);
	return a < b;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    vector<int> v(n);
    for(int &x : v){
    	cin>>x;
    }

    // sort(v.begin(), v.end(), cmp);

    sort(v.begin(), v.end(), [](int x, int y)->bool{
    	if(dem068(x) != dem068(y))
    		return dem068(x) > dem068(y);
    	return y < x;
    });

    for(int x : v)
    	cout<<x<<" ";

    return 0;
}
