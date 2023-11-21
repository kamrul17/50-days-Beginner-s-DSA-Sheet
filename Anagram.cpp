// Anagram

#include <bits/stdc++.h>
using namespace std;
bool isAnagram(string a, string b)
{
    int len1 = a.length();
    int len2 = b.length();
    unordered_map<char, int> countA, countB;
    // Check if lengths are equal and not empty
    if (len1 != len2)
    {
        return false;
    }
    for (int i = 0; i < len1; i++)
    {
        countA[a[i]]++;
    }

    for (int i = 0; i < len1; i++)
    {
        countB[b[i]]++;
    }
    // for (auto it : countA)
    // {
    //     cout << it.first << " " << it.second << endl;
    // }
    // cout << " ==================== ";
    // for (auto it : countA)
    // {
    //     cout << it.first << " " << it.second << endl;
    // }

    return countA == countB;
}
int main()
{
    string a = "siiten";
    string b = "siient";

    if (isAnagram(a, b))
    {
        cout << "The strings are anagrams." << endl;
    }
    else
    {
        cout << "The strings are not anagrams." << endl;
    }

    return 0;
}