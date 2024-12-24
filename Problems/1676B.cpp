#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        int mini = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mini = min(a[i], mini);
        }
        int ans = 0;
        for (auto b : a)
        {
            ans += b - mini;
        }
        cout << ans << endl;
    }
    return 0;
}