#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int count = 0;
        for (int digit = 1; digit <= 9; ++digit)
        {
            long long num = digit;
            while (num <= n)
            {
                ++count;
                num = num * 10 + digit;
            }
        }
        cout << count << endl;
    }
    return 0;
}