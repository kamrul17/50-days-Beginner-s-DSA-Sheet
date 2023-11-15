// Given two integers N and M and a matrix of dimensions N*M. Count all the rows in a matrix that are sorted either in strictly increasing order or in strictly decreasing order.
#include <iostream>
using namespace std;
void max_in_Row(int Mat[][3], int N, int M)
{

    int count = 0;
    for (int i = 0; i < N; i++)
    {
        int j;
        for (j = 0; j < M - 1; j++)
        {
            if (Mat[i][j] >= Mat[i][j + 1])
            {

                break;
            }
        }

        if (j == M - 1)
        {
            count++;
        }
    }
    for (int i = 0; i < N; i++)
    {
        int j;
        for (j = M - 1; j > 0; j--)
        {
            if (Mat[i][j] >= Mat[i][j - 1])
            {

                break;
            }
        }
        if (j == 0 && M > 1)
        {
            count++;
        }
    }
    cout << count;
}

int main()
{
    int Mat[3][3] = {1, 2, 3, 6, 5, 4, 7, 8, 9};

    // print
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << Mat[i][j] << " ";
        }
        cout << endl;
    }
    max_in_Row(Mat, 3, 3);

    return 0;
}
