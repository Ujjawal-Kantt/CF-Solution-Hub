#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

int main()
{
    int n;
    std::cin >> n;
    std::vector<int> coins(n);
    std::unordered_map<int, int> coin_count;

    for (int i = 0; i < n; ++i)
    {
        std::cin >> coins[i];
        coin_count[coins[i]]++;
    }

    int max_count = 0;
    for (const auto &pair : coin_count)
    {
        max_count = std::max(max_count, pair.second);
    }

    std::cout << max_count << std::endl;
    return 0;
}