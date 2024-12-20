#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int height = 0;
    int blocks = 0;
    int level = 1;

    while (blocks + (level * (level + 1)) / 2 <= n)
    {
        blocks += (level * (level + 1)) / 2;
        height++;
        level++;
    }

    cout << height << endl;
    return 0;
}