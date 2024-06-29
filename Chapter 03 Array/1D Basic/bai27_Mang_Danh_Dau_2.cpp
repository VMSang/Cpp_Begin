#include <bits/stdc++.h>

using namespace std;

int cnt[1000001] = {0};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int *a = new int[n];
    int maxV = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        cnt[a[i]] += 1;
        maxV = max(maxV, a[i]);
    }
    for (int i = 0; i <= maxV; i++)
    {
        if (cnt[a[i]] != 0)
        {
            cout << a[i] << ' ' << cnt[a[i]] << endl;
            cnt[a[i]] = 0;
        }
    }
    delete[] a;
    return 0;
}