// so sánh int với size() sẽ bị cảnh báo so sánh số có dấu với không dấu
// cần cấp phát t = s 
// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;

// string latnguoc(string s){
// 	string t;
// 	for(int i=s.size() - 1; i>=0; i--){
// 		t.push_back(s[i]);
// 	}
// 	return t;
// }

// string inhoa(string s){
// 	string t = s;
// 	for(size_t i=0; i<s.size(); i++){
// 		t[i] = toupper(s[i]);
// 	}
// 	return t;
// }

// string inthuong(string s){
// 	string t = s;
// 	for(size_t i=0; i<s.size(); i++){
// 		t[i] = tolower(s[i]);
// 	}
// 	return t;
// }
// int main() {    
//  	string s; getline(cin, s);
//  	cout<<latnguoc(s)<<endl;
//  	cout<<inthuong(s)<<endl;
//  	cout<<inhoa(s);
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {    

	// dung de lat nguoc reverse(s.begin(), s.end());

 	string s; getline(cin, s);
 	for(int i=s.size(); i>=0; i--){
 		cout<<s[i];
 	}
 	cout<<endl;
 	for(size_t i=0; i<s.size(); i++){
 		s[i] = tolower(s[i]);
 	}
 	cout<<s;
 	cout<<endl;
 	for(size_t i=0; i<s.size(); i++){
 		s[i] = toupper(s[i]);
 	}
 	cout<<s;
    return 0;
}


