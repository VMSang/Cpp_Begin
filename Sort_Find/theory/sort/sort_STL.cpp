#include <algorithm>
using namespace std;

int main() {    
	int a[] = {1,3,5,6,7,8,9};
	int n = 7;
	// intro sort: quick + heap
	//O(NlogN)
	//sort(a, a+n) sap xep het mang
	//sap xep mot phan
	sort(a+2, a+5); //sap xep tu chi so 2 den chi so 4

    return 0;
}