#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> bus(n);
    bool found = false;

    for (int i = 0; i < n; i++)
    {
        cin >> bus[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (bus[i][0] == 'O' && bus[i][1] == 'O')
        {
            bus[i][0] = bus[i][1] = '+';
            found = true;
            break;
        }
        else if (bus[i][3] == 'O' && bus[i][4] == 'O')
        {
            bus[i][3] = bus[i][4] = '+';
            found = true;
            break;
        }
    }

    if (found)
    {
        cout << "YES" << endl;
        for (const auto &row : bus)
        {
            cout << row << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
