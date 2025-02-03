#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        char c;
        cin >> s >> c;

        bool found = false;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == c && (i % 2 == 0))
            {
                found = true;
                break;
            }
        }

        if (found)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}