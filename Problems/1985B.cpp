#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long bestSum = -1;
        int bestX = 2;
        for (int x = 2; x <= n; x++)
        {
            int k = n / x;
            long long sumVal = 1LL * x * (1LL * k * (k + 1) / 2);
            if (sumVal > bestSum)
            {
                bestSum = sumVal;
                bestX = x;
            }
        }
        cout << bestX << "\n";
    }
    return 0;
}