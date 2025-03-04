#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;
    vector<string> cake(r);

    for (int i = 0; i < r; i++)
    {
        cin >> cake[i];
    }

    vector<bool> rowSafe(r, true), colSafe(c, true);

    // Mark rows and columns that contain 'S'
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (cake[i][j] == 'S')
            {
                rowSafe[i] = false;
                colSafe[j] = false;
            }
        }
    }

    int maxCellsEaten = 0;

    // Count cells in safe rows
    for (int i = 0; i < r; i++)
    {
        if (rowSafe[i])
        {
            maxCellsEaten += c;
        }
    }

    // Count cells in safe columns that have not been counted yet
    for (int j = 0; j < c; j++)
    {
        if (colSafe[j])
        {
            for (int i = 0; i < r; i++)
            {
                if (!rowSafe[i])
                {
                    maxCellsEaten++;
                }
            }
        }
    }

    cout << maxCellsEaten << endl;
    return 0;
}
