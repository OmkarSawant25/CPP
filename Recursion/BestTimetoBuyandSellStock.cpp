#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void maxProfitFinder(vector<int> &prices, int i, int &minPrice, int &maxProfit)
{
    if (i == prices.size())
        return;

    if (prices[i] < minPrice)
        minPrice = prices[i];

    int todaysProfit = prices[i] - minPrice;

    if (todaysProfit > maxProfit)
        maxProfit = todaysProfit;

    maxProfitFinder(prices, i + 1, minPrice, maxProfit);
}

int maxProfit(vector<int> &prices)
{
    int minPrice = INT_MAX;
    int maxProfit = INT_MIN;

    maxProfitFinder(prices, 0, minPrice, maxProfit);

    return maxProfit;
}

int main()
{
    int n;

    cout << "Enter number of days: ";
    cin >> n;

    vector<int> prices(n);

    cout << "Enter stock prices: ";
    for (int i = 0; i < n; i++)
        cin >> prices[i];

    int result = maxProfit(prices);

    cout << "Maximum Profit: " << result << endl;

    return 0;
}

// Enter number of days: 6
// Enter stock prices: 7 1 5 3 6 4