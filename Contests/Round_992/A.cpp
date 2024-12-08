#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        unordered_map<int, vector<int>> mpp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            int mod = a[i] % k;
            mpp[mod].push_back(i + 1); // 1-based indexing
        }
        bool flag = false;
        int index = -1;
        for (auto &it : mpp)
        {
            if (it.second.size() == 1)
            {
                flag = true;
                index = it.second[0];
                break;
            }
        }
        if (flag)
        {
            cout << "YES\n"
                 << index << "\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}