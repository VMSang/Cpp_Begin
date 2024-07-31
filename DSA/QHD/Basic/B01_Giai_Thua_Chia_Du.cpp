#include <bits/stdc++.h>
using namespace std;

long long f[1000005];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    f[0] = 1;
    for (long long i = 1; i <= 1000000; i++) {
        f[i] = (f[i-1] * i) % 100000007;
        cout<<f[i]<<endl;
    }

    int q; 
    cin >> q;
    while (q--) {
        long n; 
        cin >> n;
        cout << f[n] % 100000007 << "\n";
    }
    return 0;
}
