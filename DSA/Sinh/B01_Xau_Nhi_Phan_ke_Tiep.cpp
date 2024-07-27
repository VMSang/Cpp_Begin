#include <bits/stdc++.h>
using namespace std;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
 	string s; cin>>s;
 	int i = s.size() - 1;
 	while(i >= 0 && s[i] == '1'){
 		s[i] = '0';
 		i--;
 	}

	if(i == -1){
		for(int i=0; i<s.size(); i++){
			cout<<0;
		}
	}
	else{
		s[i] = '1';
		cout<<s;
	}
    return 0;
}