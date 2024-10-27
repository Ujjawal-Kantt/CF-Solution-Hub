#include <iostream>
using namespace std;
long long count_odds(long long x)
{
    return (x + 1) / 2;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        long long start = max(1LL, n - k + 1);
        long long total_odds_in_n = count_odds(n);
        long long total_odds_before_start = count_odds(start - 1);
        long long odd_count_in_range = total_odds_in_n - total_odds_before_start;
        if (odd_count_in_range % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
