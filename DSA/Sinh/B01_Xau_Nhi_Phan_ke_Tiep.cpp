#include <bits/stdc++.h>
using namespace std;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    string s; cin>>s;
    int i = s.size() - 1;
    while(i >= 0 && s[i] == '1'){
        s[i] = '0';
        i--;
    }
    if(i >= 0){
        s[i] = '1';
    }
    
    cout<<s;
    
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int n, a[25];

// void init(){
// 	for(int i=1; i<=n; i++){
// 		a[i] = 0;
// 	}
// }

// bool checkCuoiChua(){
// 	for(int i=1; i<=n; i++){
// 		if(a[i] == 0){
// 			return false;
// 		}
// 	}	
// 	return true;
// }

// // sinh ra 1 cấu hình kế tiếp
// void sinh(){
// 	int i = n;
// 	while(i >= 1 && a[i] == 1){
// 		a[i] = 0;
// 		i--;
// 	}
// 	// if(i != 0){
// 		a[i] = 1;
// 	// }
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);
    
// 	cin>>n;
// 	while(checkCuoiChua() == false){
// 		for(int i=1; i<=n; i++){
// 			cout<<a[i];
// 		}
// 		cout<<"\n";
// 		sinh();
// 	}
// 	//in ra cau hinh cuoi
// 	for(int i=1; i<=n; i++){
// 		cout<<a[i];
// 	}
//     return 0;
// }