#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<string> v;
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i += 2)
        {
            v.push_back(s.substr(i, 2));
        }
        string ans;
        for (int i = 0; i < v.size(); i++)
        {
            ans += v[i][0];
        }
        ans += v[v.size() - 1][1];
        cout << ans << endl;
    }
}