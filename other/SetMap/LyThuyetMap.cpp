#include <bits/stdc++.h>
using namespace std;

int main() {    
	//map: key là duy nhất, value có thể trùng, bỏ các key trùng
	//thực chất map là một pair
	//khắc phục điểm yếu không lưu được âm trong mảng đánh dấu, tuy là chậm hơn một ít
 	map<int, int> mp;
 	mp.insert({1,2})   
 	mp.size();

// lấy value thông qua chỉ số
 	cout<<mp[1]; //nhận được 2
 	mp[1] = 10000; //được thay đổi
 	mp[3] = 500; //tự tạo cái mới =>> thây vì dùng insert thì mp[x] = 1 sẽ tự thêm {x,1} 
//key không giới hạn chỉ số như mảng, có thể là số âm
 	mp[-2];

//cách duyệt
 	for(pair<int, int> x : mp){
 		cout<<mp.first<<" "<<mp.second<<endl;
 	}

//cũng có iterator như các cái trước
 	auto it = mp.begin();
 	for(it; it!=mp.end(); it++){
 		cout<<(*it).first;
 		// cout<<it->first<<" "<<ti->second;
 	}

//find , count, erase
    return 0;
}