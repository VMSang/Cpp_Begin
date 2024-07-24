#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);    
    int ts; cin>>ts;
    while(ts--){
 		// int n, m; cin>>n>>m;
 		// set<int> se1, se2;       
 		// for(int i=0; i<n; i++){
 		// 	int x; cin>>x;
 		// 	se1.insert(x);
 		// }
 		// for(int i=0; i<m; i++){
 		// 	int x; cin>>x;
 		// 	se2.insert(x);
 		// }

 		// int cnt = 0;
 		// for(auto iter = se1.begin(); iter != se1.end(); iter++){
 		// 	auto check = se2.find(*iter);
 		// 	if(check == se2.end())
 		// 		cnt++;
 		// }
 		// if(cnt != 0)
 		// 	cout<<cnt<<"\n";
 		// else
 		// 	cout<<"NOT FOUND\n";

 		int n, m; cin>>n>>m;
 		map<int, int> mp1, mp2;
 		for(int i=0; i<n; i++){
 			int x; cin>>x;
 			mp1[x] = 1;
 		}

 		for(int i=0; i<m; i++){
 			int x; cin>>x;
 			mp2[x] = 1;
 		}

 		int cnt = 0;
 		for(auto iter = mp1.begin(); iter != mp1.end(); iter++){
 			auto check = mp2.find(iter->first);
 			if(check == mp2.end())
 				cnt++;
 		}
 		
 		if(cnt != 0)
 			cout<<cnt<<"\n";
 		else
 			cout<<"NOT Found";
    }
    return 0;
}