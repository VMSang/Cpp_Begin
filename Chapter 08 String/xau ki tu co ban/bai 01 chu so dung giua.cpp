#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {    
 	string s;
 	cin>>s;
 	if(s.size()%2 == 0)
 		cout<<"NOT FOUND";
 	else
 		cout<<s[s.size()/2];   
    return 0;
}