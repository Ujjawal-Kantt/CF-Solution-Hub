#include <bits/stdc++.h>
using namespace std;
string solve(string s)
{
    unordered_map<char, int> mpp;
    for (auto c : s)
    {
        mpp[c]++;
    }
    if (mpp.size() > 4)
        return "NO";
    vector<int> freq(4);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'M' or s[i] == 'm')
        {
            freq[0]++;
            if (freq[0] > mpp[''])
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string ans = solve(s);
        cout << ans << endl;
    }
    return 0;
}