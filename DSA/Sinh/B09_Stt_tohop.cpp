#include <bits/stdc++.h>
using namespace std;

int n, k, a[1000], x[1000], final = 0;
void init(){
	cin>>n>>k;
	for(int i=1; i<=k; i++){
		cin>>x[i];
		a[i] = i;
	}
}

void sinh(){
	int i = k;
	while(i >= 1 && a[i] == n-k+1){
		i--;
	}
	if(i == 0)
		final = 1;
	else {
		a[i]++;
		for(int j=1; j<=k; j++){
			a[j] = a[j-1] + 1;
		}
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    vector<vector<int>> v;
    init();
	while(final == 0){
		vector<int> tmp;
    	for(int i=0; i<=k; i++){
    		tmp.push_back(i);
    	}
    	v.push_back(tmp);
    	sinh();
    }
    return 0;
}