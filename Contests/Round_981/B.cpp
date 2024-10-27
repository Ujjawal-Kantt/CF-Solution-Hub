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
        int arr[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int temp = 0;
                if (arr[i][j] < 0)
                {
                    temp = abs(arr[i][j]);
                    ans += temp;
                }
                for (int k = 0; k < n; k++)
                {
                    if (i + k < n and j + k < n)
                    {
                        arr[i + k][j + k] += temp;
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}