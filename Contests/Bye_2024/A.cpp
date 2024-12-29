#include <bits/stdc++.h>
using namespace std;
bool isStable(vector<int> &arr, int l, int r)
{
    int mini = INT_MAX, maxi = INT_MIN;
    for (int i = l; i <= r; i++)
    {
        mini = min(mini, arr[i]);
        maxi = max(maxi, arr[i]);
    }
    return 2LL * mini > maxi;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    vector<int> dp(n + 1, 0);
    dp[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (dp[j] > 0 and isStable(arr, j + 1, i))
            {
                dp[i] += dp[j];
                if (dp[i] >= 2)
                {
                    dp[i] = 2;
                    break;
                }
            }
        }
    }
    if (dp[n] >= 2) // whether have 2 or more partitions
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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