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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int flag = 0;
        for (int i = 0; i < n - 1; i++)
        {
            int diff = abs(arr[i] - arr[i + 1]);
            if (diff != 5 and diff != 7)
            {
                flag = 1;
            }
        }
        string ans = flag == 0 ? "YES" : "NO";
        cout << ans << endl;
    }
    return 0;
}