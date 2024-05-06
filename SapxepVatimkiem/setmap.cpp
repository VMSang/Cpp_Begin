/*
	username: Minh Sang
*/
#include <bits/stdc++.h>
//======================================
#define pb push_back
#define pf push_front
#define fir first
#define sec second
#define sz size
#define mp make_pair
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define ull unsigned long long
#define vi vector<int>
#define vll vector<long long>
#define vdb vector<double>
using namespace std;
//======================================
//khong the luu phan tu giong nhau
//tu dong sap xep cac phan tu tang dan
// O(logN)
//set khong co chi so (vì dữ liệu của nó kh nằm cạnh nhau)

//multiset có thể trùng nhau (vẫn sắp xếp), find trả về interator phần tử trước nếu có nhiều p.t same, erase thì xỏa cả nhiều đứa giống
//nếu muốn chỉ xóa một thằng thì auto it = mlse.find(2); mlse.erase(it);
//count có thể trả về nhiều hơn 0 / 1
int main(){ 
	set<int>se;
	int n; cin>>n;
	se.insert(2);
	se.insert(1);
	se.insert(2);
	se.insert(3); //{1,2,3}
	//có tính chất interator
	for(auto i=se.begin(); i!=se.begin(); i++){
		cout<<*se<<' ';
	}
	//duyet nguoc
	for(auto i=se.rbegin(); i!=rend(); i++){
		cout<<*se<<' ';
	}
	//find() //O(logN)
	auto it = se.find(); 
	if(se!=se.end())
		cout<<"FOUND\n";
	else
		cout<<"NOT FOUND\n";
	//count() O(logN) dùng để đếm số lần xuất hiện, chỉ trả về 0 / 1, có thể dùng check phần tử có trong set không
	cout<<se.count();
	//erase() //xóa phần tử  O(logN)
	se.erase(2);
	for(int i=0; i<n; i++){ //O(NlogN)
		int tmp; cin>>tmp;
		se.insert(tmp);
	}
	cout<<"so luong phan tu khac nhau"<<se.size(); 
	return 0;
}