#include <bits/stdc++.h>
using namespace std;

long F[1000005];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	F[0] = F[1] = 0;
	F[2] = 1;

	for (long i = 3; i < 1000005; i++) {
		F[i] = ((F[i - 1]%1000000007) + (F[i - 2]%1000000007) + (F[i - 3]%1000000007)) %1000000007;
	}

	int q; cin>>q;
	while(q--){
		int n; cin>>n;
		cout<<F[n]%1000000007<<"\n";
	}
	return 0;
}