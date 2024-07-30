#include <bits/stdc++.h>
using namespace std;

int f[1000005];
bool a[1000005];
void sangSNT() {
	a[0] = a[1] = 1;
	for (int i = 2; i * i <= 1000005 ; i++) {
		if (a[i] == 0) {
			for (int j = i * i; j < 1000005; j += i) {
				a[j]  = 1;
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	sangSNT();
	f[0] = f[1] = 0;
	for(int i=2; i<1000005; i++){
		if(a[i] == 0)
			f[i] = f[i-1] + 1;
		else
			f[i] = f[i-1];
	}
	int q; cin>>q;
	while(q--){
		int x; cin>>x;
		cout<<f[x]<<"\n";
	}

	return 0;
}