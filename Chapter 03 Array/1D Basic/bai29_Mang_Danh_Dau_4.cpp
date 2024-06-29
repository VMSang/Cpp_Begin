#include <bits/stdc++.h>
using namespace std;

int cnt[1000001];
int main() {
    int n; cin >> n;
    int a[n];
    int maxvalue = INT_MIN;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        maxvalue =  max(maxvalue , a[i]);
    }
    for (int i = 0; i < n; i++) {
        cnt[a[i]] += 1;
    }
    int max_ts = 0, pos_max;
    for (int i = 0; i <= maxvalue; i++) {
        if (cnt[i] > max_ts) {
            max_ts = cnt[i];
            pos_max = i;
        }
    }
    //neu yeu cau: lấy ra gia tri dau tien nếu có nhiều gtri trùng lần xuat hien
    for (int x : a) {
        if (cnt[x] > max_ts) {
            max_ts = cnt[x];
            pos_max = x;
        }
    }
    cout << pos_max << " " << max_ts;
    return 0;
}