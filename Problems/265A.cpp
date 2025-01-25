#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s, t;
    cin >> s >> t;

    int position = 0;
    for (char instruction : t)
    {
        if (s[position] == instruction)
        {
            position++;
        }
    }
    cout << position + 1 << std::endl;

    return 0;
}