// Sort a Matrix in all way increasing order
#include <bits/stdc++.h>
using namespace std;
// Printing Boundary Elements of a Matrix:
/*void boundaryElements(int mat[][4], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == 0 || i == row - 1 || j == 0 || j == col - 1)
            {
                cout << mat[i][j] << " ";
            }
            else
            {
                cout << "  "
                     << " ";
            }
        }
        cout << endl;
    }
}*/
// Finding sum of boundary elements:
void boundaryElements(int mat[][4], int row, int col)
{
    int sum = 0;
    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {
            if (i == 0 || i == row - 1 || j == 0 || j == col - 1)
            {
                sum += mat[i][j];
            }
        }
    }
    cout << sum;
}
int main()
{
    int mat[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8};
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    boundaryElements(mat, 4, 4);

    return 0;
}
