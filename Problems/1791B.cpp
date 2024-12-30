#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int x = 0, y = 0;
        bool passedCandy = false;

        for (char move : s)
        {
            if (move == 'L')
                x--;
            else if (move == 'R')
                x++;
            else if (move == 'U')
                y++;
            else if (move == 'D')
                y--;

            if (x == 1 && y == 1)
            {
                passedCandy = true;
                break;
            }
        }

        if (passedCandy)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}