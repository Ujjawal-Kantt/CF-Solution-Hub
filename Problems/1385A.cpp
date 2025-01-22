#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        int a, b, c;
        if (x == y && y == z)
        {
            cout << "YES" << endl;
            cout << x << " " << y << " " << z << endl;
        }
        else if (x == y && x >= z)
        {
            cout << "YES" << endl;
            cout << x << " " << z << " " << 1 << endl;
        }
        else if (x == z && x >= y)
        {
            cout << "YES" << endl;
            cout << x << " " << y << " " << 1 << endl;
        }
        else if (y == z && y >= x)
        {
            cout << "YES" << endl;
            cout << y << " " << x << " " << 1 << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}