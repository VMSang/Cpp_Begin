// timlimit
//#include <bits/stdc++.h>
// using namespace std;
// using ll = long long;

// bool demUoc(ll n){
// 	int dem = 0;
// 	for(int i=2; i<=sqrt(n); i++){
// 		if(n%i == 0){
// 			dem++;
// 		}
// 		if(i != n/i){
// 			dem++;
// 		}
// 	}
// 	if (dem != 3){
// 		return 0;
// 	}
// 	return 1;
// }

// int main(){
// 	ll N; cin >> N;
// 	for(int i=4; i<=N; i++){
// 		if(demUoc(i) == 1) cout<<i<<" ";
// 	}
// 	return 0;
// }

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll maxN = 10e12 + 1;
ll r[maxN];
void sang(){
	r[0] = r[1] = 1; //khong phai snt
	for(int i=2; i<=sqrt(maxN); i++){
		if (r[i] == 0){
			for(int j=i*i; j<=maxN; j+=i){
				r[j] = 1;
			}
		}
	}
}

int main(){
	ll n; cin>>n;
	for (int i=2; i<=sqrt(n); i++){
		if(r[i] == 0){
			cout<< i*i << " ";
		}
	}	
	return 0;
}