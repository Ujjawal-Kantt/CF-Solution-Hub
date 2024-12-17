#include <iostream>
#include <string>

using namespace std;

bool isSquareString(const string &s)
{
    int n = s.length();
    if (n % 2 != 0)
        return false;
    string firstHalf = s.substr(0, n / 2);
    string secondHalf = s.substr(n / 2);
    return firstHalf == secondHalf;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (isSquareString(s))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}