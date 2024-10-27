#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c;
        cin >> n >> c;
        unordered_map<int, int> mpp;
        int planets[n];
        for (int i = 0; i < n; i++)
        {
            cin >> planets[i];
            mpp[planets[i]]++;
        }
        int cost = 0;
        for (auto orbit : planets)
        {
            int first_machine = 1 * mpp[orbit];
            cost += min(c, first_machine);
            mpp.erase(orbit);
        }
        cout << cost << endl;
    }
}