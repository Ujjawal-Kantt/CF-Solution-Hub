#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    char arr[n][m];
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 'Y' or arr[i][j] == 'C' or arr[i][j] == 'M')
            {
                flag = 1;
            }
        }
    }
    if (flag == 0)
    {
        cout << "#Black&White" << endl;
    }
    else
    {
        cout << "#Color" << endl;
    }
    return 0;
}