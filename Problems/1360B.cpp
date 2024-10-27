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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int mini = INT_MAX;
        sort(arr.begin(), arr.end());
        for (int i = n - 1; i > 0; i--)
        {
            mini = min(mini, abs(arr[i] - arr[i - 1]));
        }
        cout << mini << endl;
    }
    return 0;
}