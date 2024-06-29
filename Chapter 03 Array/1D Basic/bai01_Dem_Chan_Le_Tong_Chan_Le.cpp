#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    long long a[n];
    for (int &x : a) {
        cin >> x;
    }
    long long demChan = 0, demLe = 0, tongChan = 0, tongLe = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            demChan++;
            tongChan += a[i];
        }
        else {
            demLe++;
            tongLe += a[i];
        }
    }
    cout << demChan << endl << demLe << endl << tongChan << endl << tongLe;
    return 0;
}