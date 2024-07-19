//O(NlogN)
#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;

int main() {    
    int n; cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a, a+n);
    int tmp = a[0];
    int cnt = 1;p\
    for(int i=1; i<n; i++){
        if(tmp != a[i]){
            cnt++;
            tmp = a[i];
        }
    }   
    cout<<cnt;
    return 0;
}