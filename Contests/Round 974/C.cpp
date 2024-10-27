#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> a(n);
        long long total = 0, max_wealth = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            total += a[i];
            max_wealth = max(max_wealth, a[i]);
        }
        if (n == 1)
        {
            cout << -1 << '\n';
            continue;
        }
        long long target_wealth = (total + n - 2) / (n - 1);

        if (max_wealth >= target_wealth)
        {
            cout << 0 << '\n';
        }
        else
        {
            cout << (target_wealth - max_wealth) << '\n';
        }
    }
    return 0;
}
