#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    set<char> unique_chars;
    for (char c : s)
    {
        if (isalpha(c))
        {
            unique_chars.insert(c);
        }
    }
    std::cout << unique_chars.size() << endl;
}