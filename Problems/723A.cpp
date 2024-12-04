#include <iostream>
#include <algorithm>

int main()
{
    int x, y, z;
    std::cin >> x >> y >> z;

    int positions[] = {x, y, z};
    std::sort(positions, positions + 3);

    int min_distance = (positions[1] - positions[0]) + (positions[2] - positions[1]);

    std::cout << min_distance << std::endl;

    return 0;
}