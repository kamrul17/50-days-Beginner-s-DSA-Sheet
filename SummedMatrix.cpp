/*A matrix is constructed of size n*n. such that Mi,j= i+j. Count the number of cells having value q.
Note: Assume, the array is in 1-based indexing.
Input:
n = 4, q = 7
Output:
2
Explanation:
Matrix becomes
2 3 4 5
3 4 5 6
4 5 6 7
5 6 7 8
The count of 7 is 2.*/

#include <iostream>
using namespace std;

int sumMatrix(int n, int q)
{
    // int count = 0;

    // for (int i = 1; i <= n; ++i) {
    //     for (int j = 1; j <= n; ++j) {
    //         if (i + j == q) {
    //             count++;
    //         }
    //     }
    // }

    // return count;
    // tc==O(1)
    if (2 * n < q)
    {
        return 0;
    }
    return (n - abs((n + 1) - q));
}

int main()
{
    // Example usage:
    int n = 5;
    int q = 6;
    int result = sumMatrix(n, q);
    cout << result << endl;

    return 0;
}