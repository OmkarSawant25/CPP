#include <iostream>
#include <climits>

using namespace std;

int getMax(int arr[][3], int rows, int cols)
{
    int maxi = INT_MIN;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] > maxi)
            {
                maxi = arr[i][j];
            }
        }
    }
    return maxi;
}
int main()
{
    // Initialization
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // // Row Wise input
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }

    // Row wise print
    cout << "Row Wise " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Maximum element in this array is " << getMax(arr, 3, 3) << endl;

    return 0;
}