#include <bits/stdc++.h>
using namespace std;

int main() {    
 	set<int> se;
 	se = {1, 2, 3, 4, 5, 6, 7};
// insert thêm phần tử
 	//O(log(n))
 	se.insert(10); 

//kich thuoc
 	cout<<se.size(); //O(1);
 	cout<<"kich thuoc" <<endl;

 //duyet qua thi dung for each
 	for(int x:se){
 		cout<<x<<" ";
 	}
 	cout<<endl;

//iterator thuận
 	set<int>::iterator it = se.begin();
 	// chỉ có ++ hoạc -- không được += hoạc -= vì các ô nhớ của set không nằm cạnh nhau, đây là ctdl cây

//iterator nghịch
 	set<int>::reverse_iterator it2 = se.rbegin();
 	for(it2 = se.rbegin(); it2 != se.rend(); it2++){
 		cout<<*it2<<" ";
 	}
 	cout<<endl;

//nhỏ nhất và lớn nhất
 	cout<<*se.begin()<<endl;
 	cout<<*se.rbegin()<<endl;
 	auto it3 = se.end(); it3--; cout<<*it;
	cout<<endl;

//empty() , clear() tuong tu nhu vector

//find()  tìm thấy thì trả về iterator trỏ đên số đang tìm, nếu khôn thì trỏ đến số cuối 
	//O(logN)
	auto it4 = se.find(7);
	if(it4 != se.end()){
		cout<<"FOUND"<<endl;
	} else {
		cout<<"NOT FOUND"<<endl;
	}

//count()
	//O(logN)
	if(se.count() == 1){
		cout<<"FOUND"<<endl;
	} else {
		cout<<"NOT FOUND";
	}

//erase() xóa
	//O(logN)
	auto it5 = se.begin();
	se.erase(it5); //hoạc truyền số thuộc set cũng được


//multiset giống set nhưng cho phép giá trị trùng nhau, giống luôn các hàm
	multiset<int> se2 = {1,2,2,3,3,4,5,6,6};
//find: trả về iterator đầu tiên
//count: không còn là 0/1
//erase: xóa thông qua value thì xóa hết, nên muốn xóa 1 cái thì thông qua iterator
	auto it = se2.find(2);
	se.erase(it);
	for(int x:se2){
		cout<<x<<" ";
	}


//unordered_set: chỉ có các giá trị khác nhau nhưng không được xắp xếp có thứ tự
    return 0;
}