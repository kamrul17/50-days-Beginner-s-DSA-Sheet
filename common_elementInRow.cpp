// Common elements in all rows of a given matrix
#include <bits/stdc++.h>
using namespace std;
void find_CommonElement(int mat[][5], int row, int col)
{
    unordered_map<int, int> map;
    for (int j = 0; j < col; j++)
    {
        map[mat[0][j]]++;
    }

    for (int i = 1; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            //   check if element is present in map
            if (map[mat[i][j]] == i)
            {
                map[mat[i][j]]++;
            }
            // check If this is last row
            if (map[mat[i][j]] == row && i == row - 1)
            {
                cout << mat[i][j] << " ";
            }
        }
    }
    // for (auto pr : map)
    // {
    //     cout << pr.first << " " << pr.second << endl;
    // }
}
int main()
{
    int mat[4][5] = {
        {1, 2, 1, 4, 8},
        {8, 7, 8, 5, 1},
        {8, 7, 7, 3, 1},
        {8, 1, 2, 7, 9},
    };
    find_CommonElement(mat, 4, 5);
    return 0;
}