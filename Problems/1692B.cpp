#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        freq[a[i]]++;
    }

    int uniqueCount = freq.size();
    int extraPairs = 0;

    for (auto &p : freq)
    {
        if (p.second > 1)
        {
            extraPairs += (p.second - 1);
        }
    }
    if (extraPairs % 2 == 1)
    {
        uniqueCount--;
    }

    cout << uniqueCount << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
