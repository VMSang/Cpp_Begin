#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {    
	bool check = 0;
 	string s; getline(cin, s);
 	for(size_t i=0; i<s.size() - 1; i++){
 		if (abs((s[i] -'0') - (s[i+1] - '0'))!= 1){
 			cout<<"NO";
 			check = 1;
 			break;
 		}
 	}
 	if (check == 0)
 		cout<<"YES";

    return 0;
}