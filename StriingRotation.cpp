#include <iostream>
using namespace std;
bool isRotation(string s1, string s2)
{
    int len1 = s1.length();
    int len2 = s2.length();

    // Check if lengths are equal and not empty
    if (len1 != len2 || len1 == 0)
    {
        return false;
    }

    // Concatenate s1 with itself
    string concatenated = s1 + s1;

    // Check if s2 is a substring of concatenated string

    for (int i = 0; i < len1; ++i)
    {
        cout << i << endl;
        bool isRotation = true;
        for (int j = 0; j < len2; ++j)
        {
            cout << "j== " << j << endl;
            if (s2[j] != concatenated[i + j])
            {
                isRotation = false;
                break;
            }
        }
        if (isRotation)
        {
            return true;
        }
    }

    return false;
}
int main()
{
    string s1 = "raj";
    string s2 = "arj";

    if (isRotation(s1, s2))
    {
        cout << s2 << " is a rotated version of " << s1 << ".\n";
    }
    else
    {
        cout << s2 << " is not a rotated version of " << s1 << ".\n";
    }
    return 0;
}