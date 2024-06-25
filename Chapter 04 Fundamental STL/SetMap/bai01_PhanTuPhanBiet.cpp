#include <bits/stdc++.h>
using namespace std;

int main() {    
 	set<int> se;
 	int n; cin>>n;
 	for(int i=0; i<n; i++){
 		int tmp; cin>>tmp;
 		se.insert(tmp);
 	}   
 	cout<<se.size();
    return 0;
}


//map
#include <bits/stdc++.h>
using namespace std;

int main() {    
    map<int, int> mp;
    int n; cin>>n;
    for(int i=0; i<n; i++){
        int tmp; cin>>tmp;
        mp.insert({tmp, 1});   
    }
    cout<<mp.size();
    return 0;
}