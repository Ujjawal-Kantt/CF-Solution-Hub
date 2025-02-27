#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int min_actions_to_fill(const string &s)
{
    if (s.find("...") != string::npos)
        return 2;
    return count(s.begin(), s.end(), '.');
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        cout << min_actions_to_fill(s) << endl;
    }
    return 0;
}
