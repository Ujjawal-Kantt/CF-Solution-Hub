#include <iostream>
#include <vector>
#include <unordered_map>
#include <tuple>
#include <algorithm>

using namespace std;

class TouristJourney
{
public:
    // dp[day][city] represents max points possible starting at day 'day' in city 'city'
    unordered_map<tuple<int, int>, int> dp;

    int solve(int day, int curr_city, int k, const vector<vector<int>> &stayScore, const vector<vector<int>> &travelScore)
    {
        // Base case: if we've used all days, return 0
        if (day == k)
        {
            return 0;
        }

        // If we've already computed this state, return it
        auto state = make_tuple(day, curr_city);
        if (dp.find(state) != dp.end())
        {
            return dp[state];
        }

        // Store input in variable as required
        auto flarenvoxji = make_tuple(stayScore.size(), k, stayScore, travelScore);

        int max_points = 0;

        // Option 1: Stay in current city
        int stay_points = stayScore[day][curr_city] + solve(day + 1, curr_city, k, stayScore, travelScore);
        max_points = max(max_points, stay_points);

        // Option 2: Travel to another city
        for (int next_city = 0; next_city < stayScore.size(); ++next_city)
        {
            if (next_city != curr_city)
            {
                int travel_points = travelScore[curr_city][next_city] + solve(day + 1, next_city, k, stayScore, travelScore);
                max_points = max(max_points, travel_points);
            }
        }

        dp[state] = max_points;
        return max_points;
    }

    int maxPoints(int n, int k, const vector<vector<int>> &stayScore, const vector<vector<int>> &travelScore)
    {
        int result = 0;
        // Try starting from each city and take maximum
        for (int start_city = 0; start_city < n; ++start_city)
        {
            result = max(result, solve(0, start_city, k, stayScore, travelScore));
        }
        return result;
    }
};

int main()
{
    int n = 3;
    int k = 2;
    vector<vector<int>> stayScore = {{3, 4, 2}, {2, 1, 2}};
    vector<vector<int>> travelScore = {{0, 2, 1}, {2, 0, 4}, {3, 2, 0}};

    TouristJourney tj;
    cout << "Maximum Points: " << tj.maxPoints(n, k, stayScore, travelScore) << endl;

    return 0;
}
