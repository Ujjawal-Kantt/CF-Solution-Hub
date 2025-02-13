#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        unordered_set<int> distinct_elements(a.begin(), a.end());
        int lis_length = distinct_elements.size();

        cout << lis_length << "\n";
    }

    return 0;
}