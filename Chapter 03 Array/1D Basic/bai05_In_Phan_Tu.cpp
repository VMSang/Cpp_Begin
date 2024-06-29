#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int a[n];
    for (int &x : a) cin >> x;
    int flag = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0 && i % 2 == 0) {
            cout << a[i] << " ";
            flag = 1;
        }
    }
    if (flag == 0)
        cout << "NONE";
    return 0;
}