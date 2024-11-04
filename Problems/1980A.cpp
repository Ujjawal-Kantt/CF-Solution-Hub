#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        string str;
        cin >> n >> m >> str;
        int ans = 0;
        for (char level = 'A'; level <= 'G'; level++)
        {
            int level_count = count(str.begin(), str.end(), level);
            ans += max(0, m - level_count);
        }
        cout << ans << endl;
    }
}