#include <bits/stdc++.h>
using namespace std;
int solve(int n, char arr[])
{
    int i = 0, j = n - 1;
    while (i < j)
    {
        if (arr[i] == 'W' and arr[j] == 'W')
        {
            i++;
            j--;
        }
        else if (arr[i] == 'B' and arr[j] == 'B')
        {
            return (j - i) + 1;
        }
        else if (arr[i] == 'W')
        {
            i++;
        }
        else if (arr[j] == 'W')
        {
            j--;
        }
    }
    return (j - i) + 1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << solve(n, arr) << endl;
    }
    return 0;
}