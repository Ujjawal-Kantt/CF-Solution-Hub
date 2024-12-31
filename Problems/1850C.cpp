#include <bits/stdc++.h>
using namespace std;
void solve()
{
    char arr[8][8];
    string ans = "";
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cin >> arr[i][j];
            if (isalpha(arr[i][j]))
            {
                ans += arr[i][j];
            }
        }
    }
    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}