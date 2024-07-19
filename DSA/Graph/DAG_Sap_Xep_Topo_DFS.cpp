//dùng cho đồ thị có hướng và không có chu trình
//không thể tồn tại đồ thị có hướng có chu trình

#include <bits/stdc++.h>
using namespace std;

int n,m, visited[2000];
vector<int> ke[2000];
stack<int> st;

void nhap(){
	cin>>n>>m;
	for(int i=1; i<=m; i++){
		int x, y; cin>>x>>y;

		ke[x].push_back(y);
		ke[y].push_back(x);
	}

	memset(visited, 0, sizeof(visited));

}

int DFS(int u){
	visited[u] = 1;
	for(int v : ke[u]){
		if(!visited[v]){
			DFS(v);
		}
	}
	st.push(u);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    nhap();
    //vi co the co nhieu thanh phan lien thong
    for(int i = 1; i<=n; i++){
    	if(!visited[i]){
    		DFS(i);
    	}
    }

    while(!st.empty()){
    	cout<<st.top()<<" ";
    	st.pop();
    }
    return 0;
}