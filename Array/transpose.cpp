#include <iostream>
#include <climits>

using namespace std;

void Transpose(int arr[][3], int row, int col, int transposeArray[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            transposeArray[j][i] = arr[i][j];
        }
    }
}

void printArray(int arr[][3], int row, int col)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    // Initialization
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int trans[3][3];
    
    cout << "Before Transpose " << endl;
    printArray(arr, 3, 3);
    Transpose(arr, 3, 3, trans);
    cout << "Ater Transpose " << endl;
    printArray(trans, 3, 3);

    return 0;
}