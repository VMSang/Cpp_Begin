#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll phantich(ll n, ll k)
{
    int cnt = 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                cnt++;
                n /= i;
                if (cnt == k)
                    return i;
            }
        }
    }
    if (n > 1)
    {
        cnt++;
        if (cnt == k)
            return n;
    }
    else
        return -1;
}
int main()
{
    ll n, k;
    cin >> n >> k;
    cout << phantich(n, k);
    return 0;
}