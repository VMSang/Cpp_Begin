#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int a[n];
    for (int &x : a) cin >> x;
    int X; cin >> X;
    int demL = 0, demN = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > X)
            demL ++;
        else
            demN ++;
    }
    cout << demN << endl;
    cout << demL << endl;
    return 0;
}