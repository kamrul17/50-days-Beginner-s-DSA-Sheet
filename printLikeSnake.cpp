// Given an matrixay matrix of n elements that is first strictly increasing and then maybe strictly decreasing, find the maximum element in the matrixay.
// Note : If the matrixay is increasing then just print the last element will be the maximum value.
// Common elements in all rows of a given matrix
#include <bits/stdc++.h>
using namespace std;
void print_like_snake(int matrix[][4], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        if (i & 1)
        {
            for (int j = col - 1; j >= 0; j--)
            {
                cout << matrix[i][j] << " ";
            }
        }
        else
        {
            for (int j = 0; j < col; j++)
            {

                cout << matrix[i][j] << " ";
            }
        }
    }
}
int main()
{
    int matrix[4][4] = {10, 20, 30, 40, 15, 25, 35, 45, 27, 29, 37, 48, 32, 33, 39, 50};
    print_like_snake(matrix, 4, 4);
    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cout << matrix[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}
