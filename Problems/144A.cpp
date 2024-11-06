#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int n;
    std::cin >> n;
    std::vector<int> heights(n);

    for (int i = 0; i < n; ++i)
    {
        std::cin >> heights[i];
    }

    int max_height = *std::max_element(heights.begin(), heights.end());
    int min_height = *std::min_element(heights.begin(), heights.end());

    int max_index = std::find(heights.begin(), heights.end(), max_height) - heights.begin();
    int min_index = std::find(heights.rbegin(), heights.rend(), min_height) - heights.rbegin();
    min_index = n - 1 - min_index;

    int result = max_index + (n - 1 - min_index);
    if (max_index > min_index)
    {
        result -= 1;
    }

    std::cout << result << std::endl;

    return 0;
}