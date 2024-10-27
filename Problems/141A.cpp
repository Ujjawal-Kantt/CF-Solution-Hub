#include <bits/stdc++.h>
using namespace std;
int main()
{
    string guest, host, piles;
    cin >> guest >> host >> piles;
    unordered_map<char, int> mpp;
    for (auto it : guest)
    {
        mpp[it]++;
    }
    for (auto it : host)
    {
        mpp[it]++;
    }
    for (auto it : piles)
    {
        mpp[it]--;
        if (mpp[it] == 0)
            mpp.erase(it);
    }
    string ans = mpp.empty() ? "YES" : "NO";
    cout << ans << endl;
}
