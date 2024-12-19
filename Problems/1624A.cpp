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
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        int maxElement = *max_element(a.begin(), a.end());
        int minElement = *min_element(a.begin(), a.end());
        cout << maxElement - minElement << endl;
    }
    return 0;
}