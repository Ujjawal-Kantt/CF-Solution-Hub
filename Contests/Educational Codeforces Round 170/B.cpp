#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

// Function to calculate the binomial coefficient using the wrong formula
int binomial_wrong(int n, int k)
{
    vector<int> dp(k + 1, 0); // Only store coefficients up to k
    dp[0] = 1;                // Base case: C[n][0] = 1

    for (int i = 1; i <= n; ++i)
    {
        // Update coefficients in reverse to avoid overwriting values
        for (int j = min(i, k); j >= 1; --j)
        {
            dp[j] = (dp[j] + dp[j - 1]) % MOD;
        }
    }

    return dp[k];
}

int main()
{
    int t;
    cin >> t; // Number of queries

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        cout << binomial_wrong(n, k) << '\n';
    }

    return 0;
}
