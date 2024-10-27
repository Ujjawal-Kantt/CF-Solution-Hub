#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int maxi = 0;
    int curr = 0, arr[n][2];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (j == 0)
            {
                curr -= arr[i][j];
            }
            else
            {
                curr += arr[i][j];
                maxi = max(curr, maxi);
            }
        }
    }
    cout << maxi << endl;
}