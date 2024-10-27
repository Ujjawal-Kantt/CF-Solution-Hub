#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (n == 1)
    {
        cout << 1 << endl;
        return 0;
    }
    int cnt = 1, ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            cnt++;
        }
        else
        {
            cnt = 1;
        }
        ans = max(cnt, ans);
    }
    cout << ans << endl;
    return 0;
}