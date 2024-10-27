#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    int lucky = 0;
    while (n > 0)
    {
        int digit = n % 10;
        if (digit == 4 or digit == 7)
            lucky++;
        n /= 10;
    }
    string ans = (lucky == 4 or lucky == 7) ? "YES" : "NO";
    cout << ans;
    return 0;
}