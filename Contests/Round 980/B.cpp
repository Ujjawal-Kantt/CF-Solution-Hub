#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
#define ll long long

bool check(int idx, vector<int> &arr, int k)
{
    ll total = 0;
    int n = arr.size();
    for (int j = 0; j < n; ++j)
    {
        total += min(arr[j], arr[idx]);
    }
    return total >= k;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int k;
        cin >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());

        int curr = 0;
        int left = 0, right = n - 1;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (check(mid, arr, k))
            {
                curr = mid;
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        k += curr;
        cout << k << endl;
    }
    return 0;
}
