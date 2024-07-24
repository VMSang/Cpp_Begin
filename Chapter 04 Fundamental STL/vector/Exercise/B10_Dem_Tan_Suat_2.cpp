#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 	
 	int n; cin>>n;
 	vector<char> c(n);
 	for(char &x : c)
 		cin>>x;

 	vector<pair<char, int>> freq;
    int cnt = 0;
 	for(char x : c){
 		auto iter = find_if(freq.begin(), freq.end(), [x](pair<char, int> p){
            return p.first == x;
        });

        if(iter != freq.end()){
            iter->second++;
        }
        else {
            cnt++;
            freq.push_back({x, 1});
        }
 	}   

    cout<<cnt<<"\n";
    for(auto x : freq)
        cout<<x.first<<" "<<x.second<<"\n";
    return 0;
}