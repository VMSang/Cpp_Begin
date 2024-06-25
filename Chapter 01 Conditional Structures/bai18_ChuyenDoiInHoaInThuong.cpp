#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	char c; cin>>c;
	if (c>='A' && c<='Z') cout<<(char)(c+32);
	else if (c>='a' && c<='z') cout<<(char)(c-32);
	else cout<<c;	
	return 0;
}