#include <bits/stdc++.h>
using namespace std;

//0==B, 1==A
int n, final = 0;
char a[1000];

void khoiTao() {
	for (int i = 1; i <= n; i++) {
		a[i] = 'B';
	}
}

void sinh () {
	int i = n;
	while (i >= 1 && a[i] == 'A') {
		a[i] = 'B';
		i--;
	}
	if (i == 0)
		final = 1;
	else
		a[i] = 'A';
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> n;
	khoiTao();
	while(final == 0) {
		for (int i = 1; i <= n; i++)
			cout << a[i];
		cout << "\n";
		sinh();
	}

	return 0;
}