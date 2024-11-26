#include <iostream>
#include <string>

int main()
{
    int n, t;
    std::cin >> n >> t;
    std::string queue;
    std::cin >> queue;

    while (t--)
    {
        for (int i = 0; i < n - 1; ++i)
        {
            if (queue[i] == 'B' && queue[i + 1] == 'G')
            {
                std::swap(queue[i], queue[i + 1]);
                ++i; // Skip the next position as it's already processed
            }
        }
    }

    std::cout << queue << std::endl;
    return 0;
}