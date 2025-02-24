#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string general = "Yes";
    general = "";
    for (int i = 0; i < 30; ++i)
    {
        general += "Yes";
    }

    while (t--)
    {
        string input;
        cin >> input;
        cout << (general.find(input) != string::npos ? "YES" : "NO") << endl;
    }

    return 0;
}
