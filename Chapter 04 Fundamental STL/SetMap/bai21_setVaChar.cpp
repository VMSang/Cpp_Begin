#include <bits/stdc++.h>
using namespace std;

int main() {    
 	set<char> se;
 	int n; cin>>n;
 	for(int i=0; i<n; i++){
 		char tmp; cin>>tmp;
 		se.insert(tmp);
 	}
 	cout<<se.size()<<endl;
 	
 	for(char x:se){
 		cout<<x<<" ";
 	}
 	cout<<endl;
 	for(auto it = se.rbegin(); it != se.rend(); it++){
 		cout<<*it<<" ";
 	}
    return 0;
}