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
        vector<int> input(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            input[i] = arr[i];
        }
        vector<int> ans(n);
        sort(arr.begin(), arr.end());
        int maxi = arr[n - 1];
        int second_maxi = arr[n - 2];
        for (int i = 0; i < n; i++)
        {
            if (maxi != input[i])
            {
                // cout << arr[i] - maxi << " ";
                ans[i] = input[i] - maxi;
            }
            else
            {
                // cout << second_maxi << " ";
                ans[i] = input[i] - second_maxi;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}