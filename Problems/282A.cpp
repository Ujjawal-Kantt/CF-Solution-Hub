#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x = 0;
    string operation;

    for (int i = 0; i < n; ++i)
    {
        cin >> operation;
        if (operation == "++X" || operation == "X++")
        {
            ++x;
        }
        else if (operation == "--X" || operation == "X--")
        {
            --x;
        }
    }

    cout << x << endl;
    return 0;
}