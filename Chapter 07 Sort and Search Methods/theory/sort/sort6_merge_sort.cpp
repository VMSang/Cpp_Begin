#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void merge(int a[], int l, int m, int r){
    vector<int> x(a+l, a+m+1); //l -> m
    vector<int> y(a+m+1, a+r+1); // m+1 -> r
    int i=0; j=0;
    while(i<x.size() && j<y.size()){
        if(x[i]<=y[j]){
            a[i] = x[i];
            i++
        }
    }

}
int main() {    
       
    return 0;
}