// Find whether an array is subset of another array
#include <bits/stdc++.h>
using namespace std;
// brute force
/*bool isSubset(int arr1[], int arr2[], int m, int n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (arr2[i] == arr1[j])
            {
                break;
            }
        }
        if (j == m)
        {
            return 0;
        }
    }
    return 1;
}*/
// using set stl
/*bool isSubset(int arr1[], int arr2[], int m, int n)
{
    unordered_set<int> set;
    for (int i = 0; i < m; i++)
    {
        set.insert(arr1[i]);
    }
    int p = set.size();
    for (int i = 0; i < m; i++)
    {
        set.insert(arr2[i]);
    }
    if (set.size() == p)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}*/
// using Map for handling duplicate element
bool isSubset(int arr1[], int arr2[], int m, int n)
{
    map<int, int> frequency;
    for (int i = 0; i < m; i++)
    {
        frequency[arr1[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (frequency[arr2[i]] > 0)
        {
            frequency[arr2[i]]--;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int arr1[] = {1, 4, 2};
    int arr2[] = {1, 2};
    // int arr2[] = {1, 4, 4, 2};
    int m = sizeof(arr1) / sizeof(int);
    int n = sizeof(arr2) / sizeof(int);

    if (isSubset(arr1, arr2, m, n))
    {
        cout << "arr2[] is subset of arr1[]" << endl;
    }
    else
    {
        cout << "arr2[] is NOt subset of arr1[]" << endl;
    }

    return 0;
}