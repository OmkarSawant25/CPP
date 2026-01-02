#include <iostream>
using namespace std;

void printColWiseSum(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[j][i];
        }
        cout << sum << endl;
    }
}

int main()
{
    // Initialization
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Row Wise input
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    // col wise print
    cout << "Col Wise " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }

    printColWiseSum(arr, 3, 3);

    return 0;
}