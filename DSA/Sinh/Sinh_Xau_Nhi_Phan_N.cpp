#include <bits/stdc++.h>
using namespace std;

int n, a[100], final = 0;

void sinh(){
	int i = n;
	while(i >= 1 && a[i] == 1){
		a[i] = 0;
		i--;
	}

	if(i == 0)
		final = 1;
	else
		a[i] = 1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin>>n;
    while(final == 0){
    	for(int i=1; i<=n; i++){
    		cout<<a[i]<<" ";
    	}
    	cout<<"\n";
    	sinh();
    }

    return 0;
}