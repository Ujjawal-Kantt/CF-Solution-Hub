#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<int> results(t);

    for (int i = 0; i < t; ++i)
    {
        int n;
        cin >> n;
        int k = 1;
        while ((k << 1) <= n)
        {
            k = (k << 1) | 1;
        }
        results[i] = k;
    }

    for (int i = 0; i < t; ++i)
    {
        cout << results[i] << endl;
    }

    return 0;
}