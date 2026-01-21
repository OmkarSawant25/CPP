#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    vector<int> ans;

    int m = matrix.size();
    int n = matrix[0].size();

    int startingRow = 0, startingCol = 0;
    int endingRow = m - 1, endingCol = n - 1;

    int count = 0;
    int totalElement = m * n;

    while (count < totalElement)
    {
        // Top row
        for (int i = startingCol; i <= endingCol && count < totalElement; i++)
        {
            ans.push_back(matrix[startingRow][i]);
            count++;
        }
        startingRow++;

        // Right column
        for (int i = startingRow; i <= endingRow && count < totalElement; i++)
        {
            ans.push_back(matrix[i][endingCol]);
            count++;
        }
        endingCol--;

        // Bottom row
        for (int i = endingCol; i >= startingCol && count < totalElement; i--)
        {
            ans.push_back(matrix[endingRow][i]);
            count++;
        }
        endingRow--;

        // Left column
        for (int i = endingRow; i >= startingRow && count < totalElement; i--)
        {
            ans.push_back(matrix[i][startingCol]);
            count++;
        }
        startingCol++;
    }

    return ans;
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    vector<int> result = spiralOrder(matrix);

    cout << "Spiral Order: ";
    for (int x : result)
        cout << x << " ";

    return 0;
}
