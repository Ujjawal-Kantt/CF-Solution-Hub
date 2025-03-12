#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x, y, a, b;
        cin >> x >> y >> a >> b;
        long long distance = y - x;
        long long speed = a + b;
        if (distance % speed == 0)
        {
            cout << distance / speed << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}