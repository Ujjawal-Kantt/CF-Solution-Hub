#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int n = s.length();
    int total_moves = 0;
    char current_position = 'a';

    for (int i = 0; i < n; ++i)
    {
        int clockwise_moves = abs(s[i] - current_position);
        int counter_clockwise_moves = 26 - clockwise_moves;
        total_moves += min(clockwise_moves, counter_clockwise_moves);
        current_position = s[i];
    }

    cout << total_moves << endl;
    return 0;
}