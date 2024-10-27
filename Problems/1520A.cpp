#include <bits/stdc++.h>
using namespace std;
void isSuspicion(string s, int n)
{
    unordered_map<char, bool> mpp;
    mpp[s[0]] = true;
    for (int i = 1; i < n; i++)
    {
        char curr = s[i];
        if (mpp.find(curr) != mpp.end() and s[i - 1] != curr)
        {
            cout << "NO" << endl;
            return;
        }
        else if (mpp.find(curr) != mpp.end())
        {
            mpp[curr] = true;
        }
        else
        {
            mpp[curr] = true;
        }
    }
    cout << "YES" << endl;
    return;
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
        isSuspicion(s, n);
    }
    return 0;
}