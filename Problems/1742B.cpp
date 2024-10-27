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
        int arr[n];
        unordered_map<int, int> mpp;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mpp[arr[i]]++;
        }
        string ans = (mpp.size() == n) ? "YES" : "NO";
        cout << ans << endl;
    }
    return 0;
}