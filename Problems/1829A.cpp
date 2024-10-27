#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string def = "codeforces";
        int ans = 0;
        for (int i = 0; i < 10; i++)
        {
            if (s[i] != def[i])
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
}