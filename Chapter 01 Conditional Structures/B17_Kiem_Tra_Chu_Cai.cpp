#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	char a; cin>>a;
	if(a >= 'A' && a <= 'Z'){
	    cout<<"UPPER";
	}
	else if(a >= 'a' && a <= 'z'){
	    cout<<"LOWER";
	}
	else if(a<='9' && a>='0'){
	    cout<<"DIGIT";
	}
	else{
	    cout<<"SPECIAL";
	}	
	return 0;
}