#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    long long n;
    cin >> n;
    long long x, y;
    cin >> x >> y;
    if (n == 0)
    {
        cout << 0 << endl;
    }
    long long seconds = (n + min(x, y) - 1) / min(x, y);
    cout << seconds << endl;

    return 0;
}
