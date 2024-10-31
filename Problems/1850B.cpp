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
        int arr[n][2];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> arr[i][j];
            }
        }
        int maxi = 0, index = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                if (arr[i][0] <= 10)
                {
                    if (maxi < arr[i][1])
                    {
                        maxi = arr[i][1];
                        index = i;
                    }
                }
            }
        }
        cout << index + 1 << endl;
    }
    return 0;
}