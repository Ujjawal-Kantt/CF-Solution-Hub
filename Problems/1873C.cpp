#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char arr[10][10];
        int ans = 0, i, j;
        for (i = 0; i < 10; i++)
        {
            for (j = 0; j < 10; j++)
            {
                cin >> arr[i][j];
                if (arr[i][j] == 'X')
                {
                    if (i == 0 or i == 9 or j == 0 or j == 9)
                    {
                        ans += 1;
                    }
                    else if (i == 1 or i == 8 or j == 1 or j == 8)
                    {
                        ans += 2;
                    }
                    else if (i == 2 or i == 7 or j == 2 or j == 7)
                    {
                        ans += 3;
                    }
                    else if (i == 3 or i == 6 or j == 3 or j == 6)
                    {
                        ans += 4;
                    }
                    else if (i == 4 or i == 5 or j == 4 or j == 5)
                    {
                        ans += 5;
                    }
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}