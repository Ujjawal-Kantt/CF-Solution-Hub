#include <bits/stdc++.h>
using namespace std;
void isWin(string binary)
{
    size_t size = binary.size();
    if (size % 2 == 0 and (size % 4 != 0))
    {
        cout << "DA" << endl;
    }
    else
    {
        cout << "NET" << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string binary;
        cin >> binary;
        // string s_binary = to_string(binary);
        isWin(binary);
    }
    return 0;
}