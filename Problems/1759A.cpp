#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string general = "";
    while (general.size() < 50)
    {
        general += "Yes";
    }

    while (t--)
    {
        string input;
        cin >> input;
        if (general.find(input) != string::npos)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}
