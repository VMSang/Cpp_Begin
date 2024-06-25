#include <bits/stdc++.h>
using namespace std;

int main() {    
 	set<int> se;
 	int n; cin>>n;
 	for(int i=0; i<n; i++){
 		int tmp; cin>>tmp;
 		se.insert(tmp);
 	}
 	int m; cin>>m;
 	for(int i=0; i<m; i++){
 		int tmp; cin>>tmp;
 		if(se.count(tmp)){
 			cout<<"YES\n";
 		} else {
 			cout<<"NO\n";
 		}
 	}
    return 0;
}