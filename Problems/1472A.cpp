#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int w, h, n;
        cin >> w >> h >> n;
        long long totalCards = 1;
        while (w % 2 == 0)
        {
            w /= 2;
            totalCards *= 2;
        }
        while (h % 2 == 0)
        {
            h /= 2;
            totalCards *= 2;
        }
        if (totalCards >= n)
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
