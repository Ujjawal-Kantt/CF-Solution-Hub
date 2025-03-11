#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<pair<int, int>> software(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> software[i].first;
        }
        for (int i = 0; i < n; ++i)
        {
            cin >> software[i].second;
        }

        // Sort software by the amount of RAM required to run
        sort(software.begin(), software.end());

        for (int i = 0; i < n; ++i)
        {
            if (k >= software[i].first)
            {
                k += software[i].second;
            }
        }

        cout << k << endl;
    }
    return 0;
}