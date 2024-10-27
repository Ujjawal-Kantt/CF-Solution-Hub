#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int players[n];
    int temp = 0, teams = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> players[i];
        if (5 - players[i] >= k)
        {
            temp++;
            if (temp >= 3)
            {
                teams++;
                temp = 0;
            }
        }
    }
    cout << teams << endl;
    return 0;
}