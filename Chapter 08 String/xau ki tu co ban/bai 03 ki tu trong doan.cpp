#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {    
	string s; getline(cin, s);
	int sum = 0;
 	for(char x : s){
 		if(isdigit(x)){
 			sum += x - '0';
 		}
 	}   
 	cout << sum;

    return 0;
}