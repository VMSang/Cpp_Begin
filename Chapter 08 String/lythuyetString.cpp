~~~~~~~~~~~~~~~~~ Ly Thuyet: string  ~~~~~~~~~~~~~~~~~

int main() {    
 	size() == length()
	getline(cin, s) nhập đến khi gặp xuống dòng
	getline(cin,s, '.' ) đọc đến dấu '.' có thể thây bằng bất kì kí tự khác 

	trôi lệnh: 
	cin xong sẽ để lại dấu enter nếu dùng getline phía kế sau thì dùng cin.ignore() để xóa 1 kí tự
	còn getline xong thì KHÔNG để lại enter đâu
	cin.ignore(4) sẽ xóa 4 kí tự đầu tiên
	vd: 
	cin>>n;
	cin.inorge();
	getline...

	3 cách duyệt qua chuỗi (bản chất chuỗi cũng có chỉ số, mỗi phần tử là một char)
	cách 1:
	for(int i=0; i<s.size();i++){
		cout<<s[i]<<' ';
	}
	cách 2:
	for(char x : s){
		cout<<x<<' ';
	}
	cách 3:
	for(string::iterator it=s.begin(); it!=s.end(); i++){
		cout<<*it<<' ';
	}
   	bai 1 là ví dụ cho dùng string để lấy ra chữ số trong 1 số thông qua chỉ số

   	s.push_back('a') thêm 1 kí tự a vào sâu (không thể thêm một chuỗi)
   	s.pop_back() xóa 1 kí tự

   	s.insert(chỉ số muốn chèn , "chuỗi muốn chèn");
   	s.erase(chỉ số bắt đầu xóa , số lượng kí tự muốn xóa không ghi thì xóa hết)
   	t = s.substr(chỉ số bắt đầu cắt, số lượng muốn cắt không ghi thì cắt hết)
   	if(s.find(tên chuỗi) == string::npos){
   		cout<<"khong thay";
   	} else {
   		cout<<s.find(t);
   		cout<<"tim thay";
   	}

   	so sánh theo thứ tự từ điển không quan tâm đến chiều dài
   	nếu giống nhau hết thì dài hơn thì lớn hơn
   	cộng hai sâu: s + " " + t
   	lưu ý: s += '@' không được s = s + '@' chỉ cộng kiểu này khi là xâu thôi

   	reverse(s.begin(), s.end()); dung de lat nguoc chuoi

   	số dạng char thì trừ cho '0' sẽ về số 
   	còn muốn một xâu số thành số nguyên thì n = n*10 + s[i] - '0'

   	int n = stoi(s) chuyển xâu thành số int
   	ll n = stoll(s) chyển xâu thành số ll
   	double n = stod(s)
   	trường hợp xâu s có cả chữ thì nó trả về đến chữ đầu tiên 113jnc234
   	trả về 113

   	string s = to_string(n); chuyển số thành xâu

   	lưu ý:
   	các hàm kiểm tra như:
   	isdigit(char c) Kiểm tra chữ số
	islower(char c) Kiểm tra chữ in thường
	isupper(char c) Kiểm tra in hoa
	isalpha(char c) Kiểm tra chữ cái
	int tolower(char c) Chuyển thành chữ in thường
	int toupper(char c)
	! chỉ áp dụng cho char, muốn chuyển nguyên chuỗi thành in hoa, thường
	thì dùng vòng lặp chuyển từng chữ
	
}