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
        int totalSum = 0, ans = -1;
        for (auto num : arr)
        {
            totalSum += num;
        }
        if (totalSum % n != 0)
        {
            cout << ans << endl;
        }
        else
        {
            ans = 0;
            int each = totalSum / n;
            for (int i = 0; i < n; i++)
            {
                if (arr[i] > each)
                {
                    ans++;
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}