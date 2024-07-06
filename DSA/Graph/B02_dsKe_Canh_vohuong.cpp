//nếu đỉnh lớn mà đi qua đỉnh nhỏ thì đồng nghĩa trước đó đỉnh nhỏ
//đã được biểu diễn với đỉnh lớn đó rồi 
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    cin.ignore();
    for (int i = 1; i <= n; i++) {
        string s; getline(cin, s);
        stringstream ss(s);
        string w;
        while(ss >> w){
            if(stoi(w) > i){
                cout<<i<<" "<<w<<endl;
            }
        }
    }
    return 0;
}