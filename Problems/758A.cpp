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
    int maxi = *max_element(arr, arr + n);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int diff = maxi - arr[i];
        ans += diff;
    }
    cout << ans << endl;
}