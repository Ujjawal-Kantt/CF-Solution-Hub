#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr[4];
        cin >> arr[0];
        int ans = 0;
        for (int i = 1; i < 4; i++)
        {
            cin >> arr[i];
            if (arr[0] < arr[i])
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
}