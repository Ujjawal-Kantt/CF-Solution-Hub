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
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int j = i;
            int cnt = arr[j];
            while (j < n)
            {
                cnt += arr[j + 1];
                if (cnt == 0 or arr[j] == 0)
                {
                    ans++;
                    i = j + 1;
                    break;
                }
                else
                {
                    j++;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}