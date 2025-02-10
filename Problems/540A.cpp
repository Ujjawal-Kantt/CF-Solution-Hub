#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string original, target;
    cin >> original >> target;

    int moves = 0;

    for (int i = 0; i < n; i++)
    {
        int digit1 = original[i] - '0';
        int digit2 = target[i] - '0';

        int diff = abs(digit1 - digit2);
        int min_moves = min(diff, 10 - diff);

        moves += min_moves;
    }

    cout << moves << endl;
    return 0;
}
