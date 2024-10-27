#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
#define ll long long

int main()
{
    ll testCases;
    cin >> testCases;

    while (testCases--)
    {
        ll numPairs;
        cin >> numPairs;

        // Define arrays for pairs and values
        ll pairs[numPairs][2];
        ll values[2 * numPairs];

        // Input pairs and store values
        for (ll i = 0; i < numPairs; ++i)
        {
            cin >> pairs[i][0] >> pairs[i][1];
            values[2 * i] = pairs[i][0];
            values[2 * i + 1] = pairs[i][1];
        }

        // Sort the values array
        sort(values, values + 2 * numPairs);
        map<ll, ll> valueMap;
        ll compressed[numPairs][2];

        // Map unique values to indices
        ll index = 1;
        for (ll i = 0; i < 2 * numPairs; i++)
        {
            if (valueMap.find(values[i]) == valueMap.end())
            {
                valueMap[values[i]] = index++;
            }
        }

        // Compress the pairs
        for (ll i = 0; i < numPairs; ++i)
        {
            compressed[i][0] = valueMap[pairs[i][0]];
            compressed[i][1] = valueMap[pairs[i][1]];
        }

        // Prepare the result array
        ll result[numPairs][3];
        for (ll i = 0; i < numPairs; ++i)
        {
            ll sum = compressed[i][0] + compressed[i][1];
            result[i][0] = sum;
            result[i][1] = pairs[i][0];
            result[i][2] = pairs[i][1];
        }

        // Sort the result array based on the first column
        sort(result, result + numPairs, [](ll a[], ll b[])
             { return a[0] < b[0]; });

        // Output the results
        for (ll i = 0; i < numPairs; ++i)
        {
            cout << result[i][1] << " " << result[i][2] << " ";
        }
        cout << endl;
    }

    return 0;
}