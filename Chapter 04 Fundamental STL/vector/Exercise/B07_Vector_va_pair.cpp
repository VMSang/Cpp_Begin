#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    vector<pair<int, int>> v(n);
    for (auto &x : v) cin >> x.first >> x.second;

    vector<double> b;
    for (auto x : v) {
        double cal = sqrt(x.first * x.first + x.second * x.second);
        b.push_back(cal);
    }

    for (double x : b) cout << fixed << setprecision(2) << x << " ";

    return 0;
}