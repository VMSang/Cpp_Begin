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
    }

    int q; 
    cin >> q;
    while (q--) {
        long long n; 
        cin >> n;
        cout << f[n] << "\n";
    }
    return 0;
}
