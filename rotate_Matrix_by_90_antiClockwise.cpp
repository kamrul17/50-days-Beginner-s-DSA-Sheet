// ROTATE image BY 90 DEGREE --ANTICLOCKWISE

#include <iostream>
using namespace std;
void rotateMatrix(int matrix[][3], int n)
{
    //   transpose
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
    // reverse
    for (int i = 0; i < n / 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[n - 1 - i][j];
            matrix[n - 1 - i][j] = temp;
            // matrix[i][j] = matrix[n - 1][j];
            // matrix[n - 1][j] = temp;
        }
    }
}
void printmat(int matrix[][3], int n)
{
    //   transpose
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    // int matrix[5][5] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7};
    int matrix[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    printmat(matrix, 3);
    cout << endl;
    rotateMatrix(matrix, 3);
    printmat(matrix, 3);

    return 0;
}