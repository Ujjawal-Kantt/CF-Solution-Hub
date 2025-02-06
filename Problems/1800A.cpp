#include <bits/stdc++.h>
using namespace std;

bool isMeowing(const string &s)
{
    string t;
    for (char c : s)
    {
        t += tolower(c);
    }
    int n = t.size();
    int idx = 0;
    if (idx >= n || t[idx] != 'm')
        return false;
    while (idx < n && t[idx] == 'm')
        idx++;
    if (idx >= n || t[idx] != 'e')
        return false;
    while (idx < n && t[idx] == 'e')
        idx++;
    if (idx >= n || t[idx] != 'o')
        return false;
    while (idx < n && t[idx] == 'o')
        idx++;
    if (idx >= n || t[idx] != 'w')
        return false;
    while (idx < n && t[idx] == 'w')
        idx++;
    return idx == n;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        if (isMeowing(s))
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