// Check given matrix is magic square or not

#include <bits/stdc++.h>
using namespace std;

bool magic_square(int mat[][3], int row, int col)
{
    int primeDiagonal = 0;
    int secondaryDiagonal = 0;
    for (int i = 0; i < row; i++)
    {
        primeDiagonal += mat[i][i];
        secondaryDiagonal += mat[i][row - 1 - i];
    }
    if (primeDiagonal != secondaryDiagonal)
    {
        return 0;
    }
    for (int i = 0; i < row; i++)
    {
        int rowSum = 0, colSum = 0;
        for (int j = 0; j < col; j++)
        {
            rowSum += mat[i][j];
            colSum += mat[j][i];
        }
        if (rowSum != colSum || rowSum != primeDiagonal)
        {
            return 0;
        }
    }
}
int main()
{

    int mat[3][3] = {{2, 7, 6},
                     {9, 5, 1},
                     {4, 3, 8}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    if (magic_square(mat, 3, 3))
    {
        cout << "Magic square";
    }
    else
    {
        cout << "Not A Magic square";
    }

    magic_square(mat, 3, 3);

    return 0;
}
