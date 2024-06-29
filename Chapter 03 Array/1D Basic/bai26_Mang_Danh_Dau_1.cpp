#include <bits/stdc++.h>
using namespace std;

int cnt[1000001];

int main() {
    int n; cin >> n;
    int *a = new int[n];
    int maxValue;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        cnt[a[i]] = 1;
        maxValue = max(maxValue, a[i]);
    }
    int ans = 0;
    for (int i = 0; i <= maxValue; i++) {
        if (cnt[i] == 1)
            ans ++;
    }
    cout << ans << endl;
    delete [] a;
    return 0;
}