#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, h;
    cin >> n >> h;
    int arr[n];
    int cnt = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > h)
        {
            cnt++;
        }
        ans++;
    }
    cout << ans + cnt << endl;
}