// ROTATE image BY 90 DEGREE

#include <iostream>
using namespace std;
void rotateMatrix(int mat[][3], int row, int col)
{
    //   transpose
    for (int i = 0; i < row - 1; i++)
    {
        for (int j = i + 1; j < col; j++)
        {
            int temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }
    }
    // reverse
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col / 2; j++)
        {
            int temp = mat[i][j];
            mat[i][j] = mat[i][row - 1 - j];
            mat[i][row - 1 - j] = temp;
        }
    }
}
void printmat(int mat[][3], int row, int col)
{
    //   transpose
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int mat[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    printmat(mat, 3, 3);
    cout << endl;
    rotateMatrix(mat, 3, 3);
    printmat(mat, 3, 3);

    return 0;
}