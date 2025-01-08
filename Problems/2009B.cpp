#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    char arr[n][4];
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == '#')
            {
                ans.push_back(j + 1);
            }
        }
    }
    reverse(ans.begin(), ans.end());
    for (int i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
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