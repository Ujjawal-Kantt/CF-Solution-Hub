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
        string ans = "";
        reverse(s.begin(), s.end());
        for (char c : s)
        {
            if (c == 'p')
            {
                ans += 'q';
            }
            else if (c == 'q')
            {
                ans += 'p';
            }
            else
            {
                ans += 'w';
            }
        }
        cout << ans << endl;
    }
    return 0;
}