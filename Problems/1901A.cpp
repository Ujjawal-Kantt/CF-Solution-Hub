#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;

    vector<int> stations(n);
    for (int i = 0; i < n; i++)
    {
        cin >> stations[i];
    }
    stations.push_back(0);
    stations.push_back(x);

    sort(stations.begin(), stations.end());

    int max_gap = 0;
    for (int i = 1; i < stations.size(); i++)
    {
        max_gap = max(max_gap, stations[i] - stations[i - 1]);
    }
    cout << max_gap << endl;
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
