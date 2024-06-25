#include <bits/stdc++.h>
using namespace std;

bool prime(int n){
    for(int i=2; i*i<=n; i++){
        if(n%i == 0){
            return false;
        }
    }
    return n>=2;
}

vector<int> prime_list(vector<int> v){
    vector<int> res;
    for(int x : v){
        if(prime(x)){
            res.push_back(x);
        }
    }
    return res;
}

void nhap(vector<int> &v){
    int n; cin>>n;
    for(int i=0; i<n; i++){
        int tmp; cin>>tmp;
        v.push_back(tmp);
    }
}

void in(vector<int> res){
    for(int x : res){
        cout<<x<<" ";
    }
}

int main(){
    vector<int> v;
    nhap(v);
    vector<int> res = prime_list(v);
    in(res);
    return 0;
}