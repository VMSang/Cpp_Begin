#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);    
    int ts; cin>>ts;
    while(ts--){
 		// int n; cin>>n;
 		// set<int> se;
 		// for(int i=0; i<n; i++){
 		// 	int x; cin>>x;
 		// 	se.insert(x);
 		// }
 		// cout<<se.size()<<"\n";

 		int n; cin>>n;
 		map<int, int> mp;
 		for(int i=0; i<n; i++){
 			int x; cin>>x;
 			mp[x] = 1;
 		}
 		cout<<mp.size()<<"\n";
    }
    return 0;
}