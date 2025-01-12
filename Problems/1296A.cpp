#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        int sum = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            sum += a[i];
        }
        if (sum % 2 == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            bool hasOdd = false, hasEven = false;
            for (int i = 0; i < n; ++i)
            {
                if (a[i] % 2 == 1)
                {
                    hasOdd = true;
                }
                else
                {
                    hasEven = true;
                }
            }
            if (hasOdd && hasEven)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}