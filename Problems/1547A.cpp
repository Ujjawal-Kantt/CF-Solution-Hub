#include <iostream>
#include <cmath>
using namespace std;

void solve()
{
    int xA, yA, xB, yB, xF, yF;
    cin >> xA >> yA >> xB >> yB >> xF >> yF;

    int distance = abs(xA - xB) + abs(yA - yB);

    if ((xA == xB && xB == xF && ((yF > yA && yF < yB) || (yF > yB && yF < yA))) ||
        (yA == yB && yB == yF && ((xF > xA && xF < xB) || (xF > xB && xF < xA))))
    {
        distance += 2;
    }

    cout << distance << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
1