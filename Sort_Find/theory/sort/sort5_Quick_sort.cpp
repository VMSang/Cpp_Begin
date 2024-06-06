#include <bits/stdc++.h>
using namespace std;
using ll = long long;

//lotumo
int partition(int a[], int l, int r){
    int pivot = a[r];
    int i = l - 1;
    for(int j = l; j<r; j++){
        if(a[j] <= pivot){
            ++i;
            swap(a[j], a[i]);
        }
    }
    // đưa chốt về giữa
    ++i;
    swap(a[i], a[r]);
    return i;
}

void quicksort(int a[], int l, int r){
    if (l>=r) return;
    int p = partition(a, l, r);
    quicksort(a, l, p-1); //đổi chỗ hai dòng này cũng không sao
    quicksort(a, p+1, r);
}

int main() {    
    int n = 10;
    int a[n] = {4,8,1,3,10,6,5,7,9,2};
    quicksort(a, 0, n-1);
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}