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
        vector<int> result(n, 1);
        for (int i = 0; i < n; ++i)
        {
            cout << result[i] << " ";
        }
        cout << endl;
    }
    return 0;
}