// ROTATE image BY 90 DEGREE

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void convertToWave(int arr[], int n)
{

    for (int i = 1; i < n; i += 2)
    {
        if (arr[i] > arr[i - 1])
        {
            swap(arr[i], arr[i - 1]);
        }
        if (arr[i] > arr[i + 1] && i <= n - 2)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}
void printmat(int arr[], int n)
{
    //   transpose
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[6] = {2, 4, 7, 8, 9, 10};

    convertToWave(arr, 6);
    printmat(arr, 6);

    return 0;
}