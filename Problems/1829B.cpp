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
        int cnt = 0, ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
            {
                cnt++;
            }
            else
            {
                cnt = 0;
            }
            ans = max(ans, cnt);
        }
        cout << ans << endl;
    }
    return 0;
}