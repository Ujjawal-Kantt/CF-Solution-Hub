#include <bits/stdc++.h>
using namespace std;

long long compute(int k)
{
    if (k == 1)
    {
        return 1;
    }
    return 3LL * (1LL << (k - 1)) - 2;
}

void solve()
{
    int n;
    cin >> n;
    if (n <= 2)
    {
        cout << n << "\n";
        return;
    }

    int left = 2, right = 31;
    while (left < right)
    {
        int mid = left + (right - left) / 2;
        if (compute(mid) >= n)
        {
            right = mid;
        }
        else
        {
            left = mid + 1;
        }
    }

    cout << left << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}