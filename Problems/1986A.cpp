#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x1, x2, x3;
        cin >> x1 >> x2 >> x3;
        int points[] = {x1, x2, x3};
        sort(points, points + 3);
        int a = points[1];
        int f_a = abs(x1 - a) + abs(x2 - a) + abs(x3 - a);
        cout << f_a << endl;
    }
    return 0;
}