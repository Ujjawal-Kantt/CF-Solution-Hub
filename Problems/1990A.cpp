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
        int maxi = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            maxi = max(maxi, arr[i]);
        }
        int mx = 0, index = 0;
        while (maxi > mx)
        {
            for (int i = 0; i < n; i++)
            {
                if (arr[i] > mx)
                {
                    mx = arr[i];
                    arr[i] = 0;
                    index++;
                }
            }
            maxi = *max_element(arr.begin(), arr.end());
        }
        string ans = (index % 2 == 0) ? "YES" : "NO";
        cout << ans << endl;
    }
    return 0;
}