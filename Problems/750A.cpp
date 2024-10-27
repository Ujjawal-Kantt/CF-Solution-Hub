#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int timeForContest = 240 - k;
    int timeUsed = 0, i;
    for (i = 1; i <= n; i++)
    {
        timeUsed += 5 * i;
        if (timeUsed > timeForContest)
        {
            cout << i - 1 << endl;
            return 0;
        }
    }
    if (timeUsed <= timeForContest)
    {
        cout << i - 1 << endl;
    }
    return 0;
}