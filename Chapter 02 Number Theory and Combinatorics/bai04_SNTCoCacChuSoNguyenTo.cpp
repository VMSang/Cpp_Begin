#include <bits/stdc++.h>
using namespace std;

bool Prime(int n){
    if(n<2) return false;;
    if(n == 2 || n == 3) return true;
    if(n%2 == 0 || n%3 == 0) return false;
    for(int i=5; i*i <= n; i+=6){
        if(n%i == 0 || n% (i+2) == 0) return false;
    }
    return true;
}

bool checkDigit(int n){
    while(n){
        int digit = n%10;
        if(digit != 2 && digit != 3 && digit != 5 && digit != 7) return false;
        n/=10;
    }
    return true;
}

int main() {
    int a, b; cin>>a>>b;
    int cnt = 0;
    for(int i=a; i<=b; i++){
        if(checkDigit(i) && Prime(i)) cnt++;
    }
    cout<<cnt;
    return 0;
}
