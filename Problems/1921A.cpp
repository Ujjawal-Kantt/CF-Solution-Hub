#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d, e, f, g, h, side = 0;
        cin >> a >> b >> c >> d >> e >> f >> g >> h;
        if (a != c)
        {
            side = abs(a - c);
        }
        else if (a != e)
        {
            side = abs(a - e);
        }
        else if (a != f)
        {
            side = abs(a - f);
        }
        cout << side * side << endl;
    }
    return 0;
}