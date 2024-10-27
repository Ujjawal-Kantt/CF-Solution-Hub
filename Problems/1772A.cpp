#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int a = stoi(string(1, s[0]));
        int b = stoi(string(1, s[2]));
        cout << a + b << endl;
    }
    return 0;
}