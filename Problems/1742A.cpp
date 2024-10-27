#include <bits/stdc++.h>
using namespace std;
void isSum(int a, int b, int c)
{
    if (((a + b) == c) or ((b + c) == a) or ((a + c) == b))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        isSum(a, b, c);
    }
    return 0;
}