#include <iostream>
#include <algorithm>
using namespace std;
int solve(long long a, long long b)
{
    if (a >= b)
    {
        return a;
    }
    int x = 1;
    if ((b - a) <= a)
    {
        long long ans = a - (b - a);
        return ans;
    }
    return 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        cout << solve(a, b) << endl;
    }
    return 0;
}
