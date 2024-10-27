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
        char arr[2][n];
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
            }
        }
        int flag = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[0][j] != arr[1][j])
            {
                if (!((arr[0][j] == 'G' and arr[1][j] == 'B') or (arr[0][j] == 'B' and arr[1][j] == 'G')))
                {
                    flag = 1;
                }
            }
        }
        string ans = (flag == 0) ? "YES" : "NO";
        cout << ans << endl;
    }
    return 0;
}