#include <iostream>
using namespace std;

bool isComposite(int n)
{
    if (n <= 3)
        return false;
    if (n % 2 == 0 || n % 3 == 0)
        return true;
    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return true;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 4; i <= n / 2; ++i)
    {
        if (isComposite(i) && isComposite(n - i))
        {
            cout << i << " " << n - i << endl;
            break;
        }
    }
    return 0;
}