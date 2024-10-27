#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string input, n;
        cin >> n >> input;
        int ans = 0;
        unordered_map<char, int> mpp;
        for (auto c : input)
        {
            if (mpp.find(c) != mpp.end())
            {
                ans++;
            }
            else
            {
                ans += 2;
                mpp[c]++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}