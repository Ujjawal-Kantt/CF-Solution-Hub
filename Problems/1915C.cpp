#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>

using namespace std;

bool canBuildSquare(const vector<int> &squares)
{
    long long totalSquares = accumulate(squares.begin(), squares.end(), 0LL);
    long long sideLength = sqrt(totalSquares);
    return sideLength * sideLength == totalSquares;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> squares(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> squares[i];
        }
        if (canBuildSquare(squares))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}