#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int diff = abs(a - b);
        int result = (diff + 9) / 10;
        cout << result << endl;
    }
    return 0;
}