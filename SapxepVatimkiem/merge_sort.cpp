#include <iostream>
#include <vector>
#include <algorithm>

void mergeSort(std::vector<int>& a) {
    std::sort(a.begin(), a.end());
}

int main() {
    int n; std::cin >> n;
    std::vector<int> a(n);
    for(int& x : a) {
        std::cin >> x;
    }
    mergeSort(a);
    for(int x : a) {
        std::cout << x << ' ';
    }
    return 0;
}