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
        unordered_map<int, vector<int>> mpp;
        for (int i = 0; i < k; i++)
        {
            int b, c;
            cin >> b >> c;
            mpp[b].push_back(c);
        }
        vector<int> temp;
        for (auto &it : mpp)
        {
            vector<int> &x = it.second;
            int total = accumulate(x.begin(), x.end(), 0);
            temp.push_back(total);
        }
        sort(temp.rbegin(), temp.rend());
        int ans = 0;
        int size = temp.size();
        for (int i = 0; i < min(n, size); i++)
        {
            ans += temp[i];
        }
        cout << ans << endl;
    }

    return 0;
}
