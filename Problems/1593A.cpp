#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> arr(3);
        cin >> arr[0] >> arr[1] >> arr[2];
        int maxi = *max_element(arr.begin(), arr.end());
        vector<int> ans(3);
        for (int i = 0; i < 3; i++)
        {
            if (maxi == arr[i])
            {
                ans[i] = (count(arr.begin(), arr.end(), maxi) > 1) ? 1 : 0;
            }
            else
            {
                ans[i] = (maxi - arr[i]) + 1;
            }
        }
        cout << ans[0] << ' ' << ans[1] << ' ' << ans[2] << endl;
    }
    return 0;
}