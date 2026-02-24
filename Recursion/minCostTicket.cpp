#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int mincostTickets_Helper(vector<int> &days, vector<int> &costs, int i)
{
    // Base case
    if (i >= days.size())
        return 0;

    // 1-day pass
    int cost1 = costs[0] + mincostTickets_Helper(days, costs, i + 1);

    // 7-day pass
    int passEndDay = days[i] + 7 - 1;
    int j = i;
    while (j < days.size() && days[j] <= passEndDay)
        j++;
    int cost7 = costs[1] + mincostTickets_Helper(days, costs, j);

    // 30-day pass
    passEndDay = days[i] + 30 - 1;
    j = i;
    while (j < days.size() && days[j] <= passEndDay)
        j++;
    int cost30 = costs[2] + mincostTickets_Helper(days, costs, j);

    return min(cost1, min(cost7, cost30));
}

int mincostTickets(vector<int> &days, vector<int> &costs)
{
    return mincostTickets_Helper(days, costs, 0);
}

int main()
{
    int n;
    cout << "Enter number of travel days: ";
    cin >> n;

    vector<int> days(n);
    cout << "Enter travel days: ";
    for (int i = 0; i < n; i++)
        cin >> days[i];

    vector<int> costs(3);
    cout << "Enter costs for 1-day, 7-day, 30-day passes: ";
    for (int i = 0; i < 3; i++)
        cin >> costs[i];

    cout << "Minimum cost: " << mincostTickets(days, costs) << endl;

    return 0;
}