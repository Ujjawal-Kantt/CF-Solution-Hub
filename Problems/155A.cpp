#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> scores(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> scores[i];
    }

    int amazing_performances = 0;
    int min_score = scores[0];
    int max_score = scores[0];

    for (int i = 1; i < n; ++i)
    {
        if (scores[i] > max_score)
        {
            max_score = scores[i];
            amazing_performances++;
        }
        else if (scores[i] < min_score)
        {
            min_score = scores[i];
            amazing_performances++;
        }
    }

    cout << amazing_performances << endl;
    return 0;
}