#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	vector<vector<int>> matrix(n+1, vector<int> (n+1));

	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cin>>matrix[i][j];
			if(matrix[i][j])
				cout<<i<<" "<<j<<"\n";
		}
	}	

	cout<<"\n";

	for(int i=1; i<=n; i++){
		cout<<i<<" : ";
		for(int j=1; j<=n; j++){
			if(matrix[i][j])
				cout<<j<<" ";
		}
		cout<<"\n";
	}
}