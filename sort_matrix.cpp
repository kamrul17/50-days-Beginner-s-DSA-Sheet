// Sort a Matrix in all way increasing order
#include <bits/stdc++.h>
using namespace std;
void bubbleSort(int elements[], int size)
{
    for (int i = size - 1; i >= 0; i--)
    {

        for (int j = 0; j < i - 1; j++)
        {
            if (elements[j] > elements[j + 1])
            {
                swap(elements[j], elements[j + 1]);
            }
        }
    }
}
void sort_Matrix(int matrix[][4], int row, int col)
{
    int elements[row * col];
    int ele_index = 0;
    // step: extract all element from matrix into a 1d array
    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {
            elements[ele_index++] = matrix[i][j];
        }
    }
    //  Step 2: Sort the 1D array using bubble sort
    bubbleSort(elements, ele_index);
    // Step 3: Place the sorted elements back into the matrix
    int k = 0;
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            matrix[i][j] = elements[k++];
        }
    }
}
int main()
{
    int matrix[4][4] = {10, 20, 30, 40, 15, 25, 35, 45, 27, 29, 37, 48, 32, 33, 39, 50};
    sort_Matrix(matrix, 4, 4);
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
