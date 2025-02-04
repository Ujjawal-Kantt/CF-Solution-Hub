#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> heights(n);
    for (int i = 0; i < n; i++)
    {
        cin >> heights[i];
    }

    int min_diff = INT_MAX;
    int idx1 = 0, idx2 = 0;

    for (int i = 0; i < n; i++)
    {
        int next = (i + 1) % n;
        int diff = abs(heights[i] - heights[next]);
        if (diff < min_diff)
        {
            min_diff = diff;
            idx1 = i + 1;
            idx2 = next + 1;
        }
    }

    cout << idx1 << " " << idx2 << "\n";
    return 0;
}