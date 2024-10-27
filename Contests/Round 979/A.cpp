#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> input(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> input[i];
        }
        sort(input.begin(), input.end());
        long long ans = 0;
        for (int i = 0; i < n - 1; i++)
        {
            ans += input[n - 1] - input[0];
        }

        cout << ans << endl;
    }

    return 0;
}
