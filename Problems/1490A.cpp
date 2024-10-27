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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int ans = 0;
        for (int i = 0; i < n - 1; i++)
        {
            int maxi = max(arr[i], arr[i + 1]);
            int mini = min(arr[i], arr[i + 1]);
            while (2 * mini < maxi)
            {
                mini *= 2;
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}