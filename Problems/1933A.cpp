#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int initial_sum = accumulate(a.begin(), a.end(), 0);
    int max_negate_sum = 0;
    for (int i = 0; i < n; i++)
    {
        int current_sum = 0;
        for (int j = i; j < n; j++)
        {
            current_sum += a[j];
            max_negate_sum = max(max_negate_sum, -2 * current_sum);
        }
    }
    int max_sum = initial_sum + max_negate_sum;
    cout << max_sum << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}