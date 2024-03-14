#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	const char *filepath = "vidu.txt";
	FILE *file;
	file = fopen(filepath, "rt");

	if(!file) //file == null
		cout<<"cant open file"<<endl;
	else
		cout<<"file is opened"<<endl;

	//một số hàm riêng lẻ để ghi
	// fputc('A', file);
	// fputs("\nHelloWorld", file);
	// float sothuc = 1.515648;
	// fprintf(file, "%.2f", sothuc);
	//hàm tổng hợp
	// writeToFile(file); //dịnh nghĩa hàm ghi file
	
	// fputs("hello", file);
	//doc file
	// cout<<(char)fgetc(file)<<endl;
	// cout<<(char)fgetc(file)<<endl;
	// cout<<(char)fgetc(file)<<endl;

	// char buff[255];
	// cout<<fgets(buff, 255, file);
	
	// int n;
	// fscanf(file, "%d", &n);
	// int *A = new int[n];

	// for(int i=0; i<n; i++){
	// 	fscanf(file, "%d", &A[i]);
	// 	cout<<A[i]<<endl;		
	// }
	
	fclose(file);
	return 0;
}