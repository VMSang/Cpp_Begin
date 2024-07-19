#include <bits/stdc++.h>
using namespace std;

//lower_bound: dãy đã đăng dần, trả về vị trí đầu tiên (nhỏ nhất) >= x 
//lower_bound: dãy đã đăng dần, trả về vị trí đầu tiên (nhỏ nhất) > x
// nếu không có trả về end(), hoạc a+n
//cũng có comparator

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v = {1, 2, 3, 4, 6, 9, 13};
    auto iter = lower_bound(v.begin(), v.end(), 5);
    cout<<*iter<<"\n";

    //lấy vị trí
    cout<<(iter - v.begin());
    return 0;
}