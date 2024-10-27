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
        int arr[n + 1];
        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 2; i <= n / 2; i++)
        {
            if (arr[n - i + 1] == arr[n - i + 2] or arr[i] == arr[i - 1])
            {
                swap(arr[i], arr[n - i + 1]);
            }
        }

        for (int i = 1; i < n; i++)
        {
            if (arr[i] == arr[i + 1])
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}