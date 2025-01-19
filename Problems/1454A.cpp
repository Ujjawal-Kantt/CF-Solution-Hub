#include <iostream>
#include <vector>
using namespace std;

void solve(int n)
{
    vector<int> permutation(n);
    for (int i = 0; i < n; ++i)
    {
        permutation[i] = (i + 1) % n + 1;
    }
    for (int i = 0; i < n; ++i)
    {
        cout << permutation[i] << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}