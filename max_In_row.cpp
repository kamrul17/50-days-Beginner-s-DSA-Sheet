#include <iostream>
using namespace std;
void max_in_Row(int arr[][4], int row, int col)
{

    for (int i = 0; i < row; i++)
    {
        int maxRow = INT8_MIN;
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] > maxRow)
            {
                maxRow = arr[i][j];
            }
        }
        cout << maxRow << endl;
    }
}

int main()
{
    int arr[3][4] = {1, 2, 3, 21, 12, 1, 65, 9, 1, 56, 34, 2};

    // print
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    max_in_Row(arr, 3, 4);

    return 0;
}