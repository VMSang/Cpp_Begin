#include <bits/stdc++.h>
using namespace std;

int main() {
	//map: key là duy nhất, value có thể trùng, bỏ các key trùng
	//thực chất map là một pair
	//khắc phục điểm yếu không lưu được âm trong mảng đánh dấu, tuy là chậm hơn một ít
	//khởi tạo mp[5]++ nghĩa là nếu chưa tồn tại thì tạo thêm với key=5, value=0 sau đó cộng lên 1
	map<int, int> mp;
	mp.insert({1, 2})
	mp.size();

// lấy value thông qua chỉ số
	cout << mp[1]; //nhận được 2
	mp[1] = 10000; //được thay đổi, value = 10000
	mp[3] = 500; //tự tạo cái mới =>> thây vì dùng insert thì mp[x] = 1 sẽ tự thêm {x,1}
//key không giới hạn chỉ số như mảng, có thể là số âm
	mp[-2];

//cách duyệt
	for (pair<int, int> x : mp) {
		cout << mp.first << " " << mp.second << endl;
	}

//cũng có iterator như các cái trước
	auto it = mp.begin();
	for (it; it != mp.end(); it++) {
		cout << (*it).first;
		// cout<<it->first<<" "<<ti->second;
	}

//find , count, erase


	std::map<int, std::string> mymap = {{1, "one"}, {2, "two"}, {3, "three"}, {4, "four"}};

	auto range = mymap.equal_range(3);

	std::cout << "Lower bound points to: " << range.first->first << " => " << range.first->second << '\n';
	std::cout << "Upper bound points to: " << range.second->first << " => " << range.second->second << '\n';

	return 0;
}