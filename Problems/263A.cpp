#include <iostream>
#include <cmath>

int main()
{
    int matrix[5][5];
    int row, col;
    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            std::cin >> matrix[i][j];
            if (matrix[i][j] == 1)
            {
                row = i;
                col = j;
            }
        }
    }
    int moves = std::abs(row - 2) + std::abs(col - 2);
    std::cout << moves << std::endl;

    return 0;
}