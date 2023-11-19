// Efficiently compute sums of diagonals of a matrix
#include <iostream>
using namespace std;
int sum_of_diagonal(int A[][4], int n)
{
    int primary_diagonal = 0;
    int secondary_diagonal = 0;
    for (int i = 0; i < n; i++)
    {

        primary_diagonal += A[i][i];
        secondary_diagonal += A[i][n - i - 1];
    }
    return primary_diagonal + secondary_diagonal;
}
int main()
{
    int A[4][4] = {1, 1, 1, 0, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    int ans = sum_of_diagonal(A, 4);
    cout << ans;
    return 0;
}