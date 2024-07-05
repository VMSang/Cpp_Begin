#include <bits/stdc++.h>
using namespace std;

//cũng có giới hạn phần tử như mảng (10^7)

int main() {    
        //so sánh first trước nếu bàng nhau thì so second
 	pair<int, int> p = make_pair(100, 200);

 	vector<int> a;
 	a.push_back(100);
 	a.push_back(200);
 	a.push_back(300);
 	cout<<a.size();
 	//for(auto it = ...)
 	for(vector<int>::iterator i = a.bigin(); i != a.end(); i++){
 		cout<<*i<<" ";
 	} //v.begin + x (trỏ đến chỉ số x)
 	for(auto x : a){
 		cout<<x<<" ";
 	}

 	int n; cin>>n;
        //vector<int> v[3]; //mỗi phần tử là 1 vector
 	vector<int> b(n, 100); //khởi tạo sẵng n ô, có thể pushback thêm, số 100 là khởi tạo cho all phần tử bằng 100 (option)
 	for(int i=0; i<n; i++){
        //nếu kh khởi tạo sẵng thì dùng tmp trong for để lưu, sau đó pushback tmp vào
 		cin>>a[i];
 	} //nếu đã khai báo n ô như trên mà xuống dưới pushback thì nó sẽ thêm sau ô cuối cùng chứ kh đè lên các ô n  

    vector<int> c = {2,3,1,3,5};
    vector<int>::iterator ei = c.begin();
    ++ei;
    --ei;
    ei += 3; //không được viết ei = ei + 3;
    ei -= 3; // "

    //clear(): xoa toan bo
    //empty(): rong == true
    //pop_back(): xoa cuoi
    v.insert(v.begin() + 3, 200); //them 200 vao chi so 3
    v.erase(v.begin() + 3) //xoa phan tu chi so 3
    v.assign(5, 100); //100 100 100 100 100
    v.resize(4); //thay doi kich thuoc chi con 4 phan tu 

    // chỉ nên dùng cho iterator, pair
    auto it = v.begin();

    //cach doc nhieu so tren nhieu dong mà không biết trước số lượng
    while(cin>>n){
        v.push_back(n);
    }
    //đọc nguyen một dòng
    string s;
    while(getline(cin,s)){
        v.push_back(s);
    }
    return 0;
}