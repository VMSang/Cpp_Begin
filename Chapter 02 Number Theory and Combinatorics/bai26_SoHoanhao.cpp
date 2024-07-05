#include <bits/stdc++.h>
using namespace std;
vector<long long> v;
bool isPrime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i * i <= n; ++i)
        if (n % i == 0)
            return false;
    return true;
}
//phi ham euler: p: la snt, va 2^p - 1 cung la snt thi 2^(p-1) * 2^p -1 == shh
void sohoanhao2(){
	//p = 1 khong the tao ra shh
	for (int p=2; p<=32; p++)
	{
		if (isPrime(p))
		{
			long long tmp = pow(2,p) - 1;
			if (isPrime(tmp))
			{
				long long res = pow(2,p-1) * tmp;
				v.push_back(res);
			}
		}
	}
}

int main(){
	sohoanhao2();
	long long n; cin>>n;
	 for(long long x : v)
    {
        if(n == x)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}