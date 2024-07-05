#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a1, a2, a3, b1, b2, b3, n;
    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3 >> n;
    int keCup = ((a1 + a2 + a3) + 5 - 1) / 5;
    int keHuyChuong = ((b1 + b2 + b3) + 10 - 1) / 10;
    if (keCup + keHuyChuong > n) {
        cout << "NO";
    } else {
        cout << "YES";
    }
    return 0;
}