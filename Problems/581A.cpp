#include <bits/stdc++.h>
using namespace std;
int main()
{
    int red, blue;
    cin >> red >> blue;
    int diff = 0, same = 0;
    while (red > 0 and blue > 0)
    {
        diff++;
        red--;
        blue--;
    }
    while (red > 0 or blue > 0)
    {
        if (red >= 2)
        {
            same++;
        }
        if (blue >= 2)
        {
            same++;
        }
        red -= 2;
        blue -= 2;
    }
    cout << diff << " " << same << endl;
    return 0;
}