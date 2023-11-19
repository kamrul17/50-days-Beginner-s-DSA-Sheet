// Find the row with maximum number of 1s
#include <iostream>
using namespace std;
int find_max_1S(int A[][4], int row, int col)
{
    int total_count = INT8_MAX;
    int rowIndex = -1;
    for (int i = 0; i < row; i++)
    {

        int count = 0;

        for (int j = 0; j < col; j++)
        {
            if (A[i][j] & 1)
            {
                count++;
            }
        }
        if (count < total_count)
        {
            total_count = count;
            rowIndex = i;
        }
        // else if (count == total_count && rowIndex > i)
        // {
        //     cout << rowIndex << " i " << endl;
        //     // If two rows have the same minimum count, update rowIndex to the lower index
        //     rowIndex = i;
        // }
        // if (count > total_count)
        // {
        //     total_count = count;
        //     rowIndex = i;
        // }
    }
    return rowIndex + 1;
}
int main()
{
    int A[4][4] = {1, 1, 1, 0, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1};
    // int A[3][3] = {0, 0, 0, 0, 0, 0, 0, 0, 0};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    int ans = find_max_1S(A, 4, 4);
    cout << ans;
    return 0;
}