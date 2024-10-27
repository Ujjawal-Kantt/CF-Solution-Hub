#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, r;
    cin >> k >> r;
    int i = 1;
    while (true)
    {
        int totalPrice = i * k;
        if (totalPrice % 10 == 0)
        {
            cout << i << endl;
            return 0;
        }
        int wcTPrice = totalPrice - r;
        if (wcTPrice % 10 == 0)
        {
            cout << i << endl;
            return 0;
        }
        i++;
    }
}