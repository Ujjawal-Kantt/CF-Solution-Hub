#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long a, b, n;
        cin >> a >> b >> n;
        int operations = 0;
        while (a <= n && b <= n)
        {
            if (a < b)
            {
                a += b;
            }
            else
            {
                b += a;
            }
            operations++;
        }
        cout << operations << endl;
    }
    return 0;
}