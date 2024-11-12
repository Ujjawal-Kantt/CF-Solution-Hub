#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int mini = INT_MAX;
        for (int c = a; c <= b; c++)
        {
            int res = (c - a) + (b - c);
            mini = min(res, mini);
        }
        cout << mini << endl;
    }
    return 0;
}