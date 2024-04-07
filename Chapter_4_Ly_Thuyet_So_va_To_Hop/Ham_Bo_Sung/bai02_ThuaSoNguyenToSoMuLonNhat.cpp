#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void phantich(int n){
	ll maxvalue = 0, maxcount = 0;
	for(int i=2; i*i <= n; i++){
		int count = 0;
		if(n%i==0){
			while(n%i==0){
				n/=i;
				count++;
			}
			if(count > maxcount){
				maxcount = count;
				maxvalue = i;
			}
		}
	}
	if(n!=1){ //không nhất thiết sau khi phân tích n phải = 1, mà có thể là số khác lớn hơn 1
		if(maxcount<1){ //nên cần dòng này để check mũ có thây đổi hay không, nếu đã từng đổi thì kh là snt thì chỉ khỏa đk n!=1 chứ kh thỏa ở trong nên mới in ra i được
			maxvalue = n; //hay nói cách khác, kh có điều kiện maxcount<1 thì maxvalue/count sẽ luôn update mỗi khi n!=1 vì số bth cuối cùng cũng có thể khác 1 
			maxcount = 1;
		}
	}
	cout<<maxvalue << ' ' <<maxcount;

}

int main(){
	ll n; cin>>n;
	phantich(n);
	return 0;
}