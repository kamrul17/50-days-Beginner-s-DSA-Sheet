// Given an array arr of n elements that is first strictly increasing and then maybe strictly decreasing, find the maximum element in the array.
// Note : If the array is increasing then just print the last element will be the maximum value.
// Common elements in all rows of a given matrix
#include <bits/stdc++.h>
using namespace std;
int Max_Element(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    // int mid = start + (end - start) / 2;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (mid > 0 && mid < n - 1)
        {
            if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
            {
                return arr[mid];
            }
            else if (arr[mid] < arr[mid - 1])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        else if (mid == 0)
        {
            // cout << "first";
            if (arr[0] > arr[1])
            {
                return arr[0];
            }
            else
            {
                return arr[1];
            }
        }
        else if (mid == n - 1)
        {
            // cout << "last";
            if (arr[n - 1] > arr[n - 2])
            {
                return arr[n - 1];
            }
            else
            {
                return arr[n - 2];
            }
        }
    }
}
int main()
{
    int arr[5] = {11, 4, 3, 2, 1};
    int ans = Max_Element(arr, 5);
    cout << ans;
    return 0;
}