#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int a[n];

    int start;
    cin >> start;
    a[0] = start;

    int Min_dis = INT_MAX;
    for (int i = 1; i < n; i++) {
        int x; cin >> x;
        a[i] = x;
        Min_dis = min(Min_dis, abs(a[i] - a[i - 1]));
    }
    cout << Min_dis;
    return 0;
}