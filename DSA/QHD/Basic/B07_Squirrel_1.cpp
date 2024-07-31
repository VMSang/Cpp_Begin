//video 12,DSA,2024
#include <bits/stdc++.h>
using namespace std;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n; cin>>n;
    int a[n];
    for(int &x : a)
    	cin>>x;

    long long F[n];
    F[0] = 0;
    F[1] = abs(a[1] - a[0]);

    for(int i=2; i<n; i++){
    	// int c1 = F[i-1] + abs(a[i-1] - a[i]);
    	// int c2 = F[i-2] + abs(a[i-2] - a[i]);
    	// F[i] = (c1 > c2) ? c2 : c1;

    	F[i] = min(F[i-1] + abs(a[i-1] - a[i]),F[i-2] + abs(a[i-2] - a[i]));
    }

    cout<<F[n-1];
    return 0;
}