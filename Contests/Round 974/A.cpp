#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int curr_gold = 0;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= k)
            {
                curr_gold += arr[i];
                arr[i] = 0;
            }
            else
            {
                if (curr_gold != 0 and arr[i] == 0)
                {
                    curr_gold -= 1;
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}