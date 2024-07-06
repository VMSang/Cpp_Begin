#include <bits/stdc++.h>
using namespace std;

//tang dan
bool cmp(pair<int, int> a, pair<int, int> b) {
	if (a.first != b.first) return a.first < b.first;
	else return a.second < b.second;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin >> n;
	cin.ignore();
	vector<pair<int, int>> xapSep;

	for (int i = 1; i <= n; i++) {
		string s; getline(cin, s);
		stringstream ss(s);
		string w;

		while (ss >> w) {
			xapSep.push_back({i, stoi(w)});
		}
	}

	sort(xapSep.begin(), xapSep.end(), cmp);

	for (auto x : xapSep) {
		cout << x.first << " " << x.second << endl;
	}
	return 0;
}