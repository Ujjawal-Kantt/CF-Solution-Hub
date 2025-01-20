#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int sum1 = 0, sum2 = 0;
        for (int i = 1; i <= n / 2 - 1; ++i)
        {
            sum1 += (1 << i);
        }
        sum1 += (1 << n);
        for (int i = n / 2; i < n; ++i)
        {
            sum2 += (1 << i);
        }
        cout << abs(sum1 - sum2) << endl;
    }
    return 0;
}