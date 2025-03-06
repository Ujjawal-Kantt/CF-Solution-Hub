#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int d1, d2, d3;
    cin >> d1 >> d2 >> d3;
    int route1 = d1 + d2 + d3;
    int route2 = 2 * (d1 + d2);
    int route3 = 2 * (d1 + d3);
    int route4 = 2 * (d2 + d3);
    int min_distance = min({route1, route2, route3, route4});

    cout << min_distance << endl;

    return 0;
}