#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int b, c, h;
        cin >> b >> c >> h;

        // Calculate the maximum number of fillings we can use
        int max_fillings = min(b - 1, c + h);

        // Calculate the total number of layers
        int max_layers = 2 * max_fillings + 1;

        cout << max_layers << "\n";
    }

    return 0;
}