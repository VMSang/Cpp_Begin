//code goc

// #include <bits/stdc++.h>
// using namespace std;

// int n, k, a[100], final = 0;

// void init(){
// 	cin>>n>>k;
// 	for(int i=1; i<=k; i++)
// 		a[i] = i;
// }

// void sinh(){
// 	int i = k;
// 	while(i >= 1 && a[i] == n-k+i){
// 		i--;
// 	}
// 	if(i == 0)
// 		final = 1;
// 	else{
// 		a[i]++;
// 		for(int j=i+1; j<=k; j++){
// 			a[j] = a[j - 1] + 1;
// 		}
// 	}
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);

//     init();

// 	while(final == 0){
// 		for(int i=1; i<=k; i++){
// 			cout<<a[i]<<" ";
// 		}
// 		sinh();
// 		cout<<"\n";

// 	}

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int k, n, a[1005];
void init() {
	cin>>n>>k;
	for (int i = 1; i <= k; i++) {
		cin>>a[i];
	}
}

void sinh() {
	int i = k;
	while (i >= 1 && a[i] == n - k + i) {
		i--;
	}
	if (i == 0) {
		for (int j = 1; j <= k; j++) {
			cout << j << " ";
		}
	}
	else {
		a[i]++;
		for (int j = i + 1; j <= k; j++) {
			a[j] = a[j - 1] + 1;
		}
		for (int j = 1; j <= k; j++) {
			cout << a[j] << " ";
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	init();
	sinh();

	return 0;
}