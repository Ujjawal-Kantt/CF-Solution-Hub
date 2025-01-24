#include <bits/stdc++.h>
using namespace std;

int maxSumAfterOperations(vector<int> &a)
{
    int n = a.size();
    int totalSum = 0;
    for (int i = 0; i < n; ++i)
    {
        totalSum += a[i];
    }

    int maxSum = totalSum;
    for (int l = 0; l < n; ++l)
    {
        int currentSum = totalSum;
        for (int r = l; r < n; ++r)
        {
            currentSum -= 2 * a[r];
            maxSum = max(maxSum, currentSum);
        }
    }

    return maxSum;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        cout << maxSumAfterOperations(a) << endl;
    }
    return 0;
}