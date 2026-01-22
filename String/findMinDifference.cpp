#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
#include <limits.h>

using namespace std;

int findMinDifference(vector<string>& timePoints)
{
    vector<int> minutes;

    for (int i = 0; i < timePoints.size(); i++)
    {
        string curr = timePoints[i];
        int hours = stoi(curr.substr(0, 2));
        int mins  = stoi(curr.substr(3, 2));
        int totalMin = hours * 60 + mins;
        minutes.push_back(totalMin);
    }

    sort(minutes.begin(), minutes.end());

    int mini = INT_MAX;
    int n = minutes.size();

    for (int i = 0; i < n - 1; i++)
    {
        mini = min(mini, minutes[i + 1] - minutes[i]);
    }

    int lastDiff = (minutes[0] + 1440) - minutes[n - 1];
    mini = min(mini, lastDiff);

    return mini;
}

int main()
{
    vector<string> timePoints = {"23:59", "00:00", "12:30"};

    cout << findMinDifference(timePoints) << endl;

    return 0;
}
