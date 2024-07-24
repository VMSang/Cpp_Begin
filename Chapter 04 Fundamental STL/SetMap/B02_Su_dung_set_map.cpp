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

 		// int q; cin>>q;
 		// while(q--){
 		// 	int truyVan; cin>>truyVan;
 		// 	auto iter = se.find(truyVan);
 		// 	if(iter != se.end())
 		// 		cout<<"YES\n";
 		// 	else
 		// 		cout<<"NO\n";
 		// }

 		int n; cin>>n;
 		map<int, int> mp;
 		for(int i=0; i<n; i++){
 			int x; cin>>x;
 			mp[x] = 1;
 		}

 		int q; cin>>q;
 		while(q--){
 			int truyVan; cin>>truyVan;
 			auto iter = mp.find(truyVan);
 			if(iter != mp.end())
 				cout<<"YES\n";
 			else
 				cout<<"NO\n";
 		}
    }
    return 0;
}