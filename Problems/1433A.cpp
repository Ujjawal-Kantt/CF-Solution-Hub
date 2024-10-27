#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, ans = 0;
        cin >> x;
        int same_digit = x % 10;
        int size_x = to_string(x).size();
        for (int i = 1; i < same_digit; i++)
        {
            ans += 10;
        }
        for (int i = 1; i <= size_x; i++)
        {
            ans += i;
        }
        cout << ans << endl;
    }
}