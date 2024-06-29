#include <bits/stdc++.h>
using namespace std;

int cnt[1000001];
int main()
{
    int n;
    cin >> n;
    int a[n];
    int maxValue;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        cnt[a[i]] = 1;
        maxValue = max(maxValue, a[i]);
    }

    for (int i = 0; i < maxValue; i++)
    {
        if (cnt[a[i]] == 1)
        {
            cout << a[i] << " ";
            cnt[a[i]] = 0;
        }
    }

    return 0;
}