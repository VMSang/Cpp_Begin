#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    vector<int> v(n);
    for(int &x : v) cin>>x;

    cout<<*min_element(v.begin(), v.end())<<endl;
	cout<<*max_element(v.begin(), v.end())<<endl;
	cout<<accumulate(v.begin(), v.end(), 0)<<endl;

    // int a[n];
    // for(int &x : a) cin>>x;

    // cout<<*min_element(a, a+n)<<endl;
	// cout<<*max_element(a, a+n)<<endl;
	// cout<<accumulate(a, a+n, 0);

    return 0;
}