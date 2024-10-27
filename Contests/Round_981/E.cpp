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
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }
        vector<bool> visited(n + 1, false);
        int ans = 0;
        for (int i = 1; i <= n; ++i)
        {
            if (!visited[i])
            {
                int cnt = 0;
                int index = i;
                while (!visited[index])
                {
                    visited[index] = true;
                    index = arr[index - 1];
                    cnt++;
                }
                if (cnt >= 3)
                {
                    ans += (cnt - 1) / 2;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
