#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    vector<int> v(n);
    for(int &x : v){
    	cin>>x;
    }

    sort(v.begin(), v.end());

    int MIN = INT_MAX, dem = 0;;
    for(int i=1; i<n; i++){
    	if(v[i] - v[i-1] < MIN){
    		MIN = v[i] - v[i-1];
    		dem = 1;
    	} else if (v[i] - v[i-1] == MIN){
    		dem++;
    	}
    }

    cout<<MIN<<" "<<dem;
    return 0;
}