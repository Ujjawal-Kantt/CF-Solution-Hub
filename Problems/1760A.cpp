#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr[3];
        cin >> arr[0] >> arr[1] >> arr[2];
        int ans = 0;
        int maxi = *max_element(arr, arr + 3);
        int mini = *min_element(arr, arr + 3);
        for (int num : arr)
        {
            if (num != maxi and num != mini)
            {
                ans = num;
            }
        }
        cout << ans << endl;
    }
}