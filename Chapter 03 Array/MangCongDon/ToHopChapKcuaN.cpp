//dong i, cot j: to hop chap k(j) của n(i)
//cong thuc pascal: C,k,n = C,k-1,n-1 + Ck,n-1
#include <bits/stdc++.h>
using namespace std;

int a[1005][1005];
void init(){
	//a[i][j] luu to hop chap j cua i
	for(int i=0; i<=1000; i++){
		for(int j=0; j<=i; j++){
			if(j == 0 || i == j)
				a[i][j] = 1;
			else {
				//cai chay truc tiep la j
				a[i][j] = a[i-1][j-1] + a[i-1][j]; 
				a[i][j]%=1000000007;
			}
		}
	}
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    init();    
    int ts; cin>>ts;
    while(ts--){
        int n, k; cin>>n>>k;
        cout<<a[n][k]<<"\n";
    }
    return 0;
}
