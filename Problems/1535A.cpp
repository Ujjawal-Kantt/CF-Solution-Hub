#include <bits/stdc++.h>
using namespace std;
void isFair(vector<int> skills, int first, int second)
{

    sort(skills.begin(), skills.end());
    int maxi = skills[3], second_maxi = skills[2];
    if ((first == maxi or first == second_maxi) and (second == maxi or second == second_maxi))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> skills(4);
        for (int i = 0; i < 4; i++)
        {
            cin >> skills[i];
        }
        int first = (skills[0] > skills[1]) ? skills[0] : skills[1];
        int second = (skills[2] > skills[3]) ? skills[2] : skills[3];
        isFair(skills, first, second);
    }
    return 0;
}