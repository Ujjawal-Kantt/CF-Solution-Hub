#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, m, x;
        cin >> n >> m >> x;
        x--;
        long long row = x % n;
        long long col = x / n;
        long long result = row * m + col + 1;
        cout << result << endl;
    }
    return 0;
}