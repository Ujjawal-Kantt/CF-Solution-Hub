#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        unordered_map<int, int> freq;
        int result = -1;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            freq[x]++;
            if (freq[x] >= 3)
            {
                result = x;
            }
        }
        cout << result << endl;
    }
    return 0;
}