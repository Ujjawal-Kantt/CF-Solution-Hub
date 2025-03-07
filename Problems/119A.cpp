#include <iostream>
#include <algorithm>

using namespace std;

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    int a, b, n;
    cin >> a >> b >> n;

    bool simonTurn = true;
    while (n > 0)
    {
        if (simonTurn)
        {
            n -= gcd(a, n);
        }
        else
        {
            n -= gcd(b, n);
        }
        simonTurn = !simonTurn;
    }

    if (simonTurn)
    {
        cout << "1" << endl; // Antisimon wins
    }
    else
    {
        cout << "0" << endl; // Simon wins
    }

    return 0;
}