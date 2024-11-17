#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        unordered_map<int, int> mpp;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mpp[arr[i]]++;
        }
        int ans = 0;
        for (auto it : mpp)
        {
            ans += it.second / 2;
        }
        cout << ans << endl;
    }
    return 0;
}