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
        sort(arr.begin(), arr.end());
        for (int i = 1; i < n; i++)
        {
            ans += (arr[i] - arr[i - 1]);
        }
        cout << ans << endl;
    }
    return 0;
}