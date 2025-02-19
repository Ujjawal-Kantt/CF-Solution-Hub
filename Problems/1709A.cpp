#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, a, b, c;
        cin >> x >> a >> b >> c;
        bool canOpenAll = false;
        if (x == 1)
        {
            if (a == 2 && b == 3)
                canOpenAll = true;
            if (a == 3 && c == 2)
                canOpenAll = true;
        }
        else if (x == 2)
        {
            if (b == 1 && a == 3)
                canOpenAll = true;
            if (b == 3 && c == 1)
                canOpenAll = true;
        }
        else if (x == 3)
        {
            if (c == 1 && a == 2)
                canOpenAll = true;
            if (c == 2 && b == 1)
                canOpenAll = true;
        }

        if (canOpenAll)
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