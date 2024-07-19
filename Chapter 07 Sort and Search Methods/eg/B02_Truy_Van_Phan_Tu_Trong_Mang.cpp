#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int ts; cin>>ts;
    while(ts--){
 		int n; cin>>n;
 		vector<int> v(n);
 		for(int &x : v)
 			cin>>x;
 		sort(v.begin(), v.end());
 		int q; cin>>q;
 		while(q--){
 			int x; cin>>x;
 			if(binary_search(v.begin(), v.end(), x))
 				cout<<"YES\n";
 			else
 				cout<<"NO\n";
 		}
    }
    return 0;
}