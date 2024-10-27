#include <iostream>
#include <string>
using namespace std;
string solve(int n)
{
    string ans;
    for (int i = 0; i < n; ++i)
    {
        if (!i)
            ans += '1';
        else
            ans += '0';
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        cout << solve(n) << endl;
    }

    return 0;
}
