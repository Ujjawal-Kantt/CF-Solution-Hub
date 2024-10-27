#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> cards(n);
    for (int i = 0; i < n; i++)
    {
        cin >> cards[i];
    }
    int dima = 0, sereja = 0;
    int i = 0, j = n - 1, round = 0;
    while (i <= j)
    {
        if (cards[i] > cards[j])
        {
            if (round % 2 == 0)
            {
                // Sereja's chance
                sereja += cards[i];
            }
            else
            {
                // Dima's chance
                dima += cards[i];
            }
            i++;
        }
        else
        {
            if (round % 2 == 0)
            {
                // Sereja's chance
                sereja += cards[j];
            }
            else
            {
                // Dima's chance
                dima += cards[j];
            }
            j--;
        }
        round++;
    }
    cout << sereja << " " << dima << endl;
    return 0;
}