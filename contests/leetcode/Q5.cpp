/* Q5: Q2. Total Characters in String After Transformations I
Medium
4 pt.

You are given a string s and an integer t, representing the number of transformations to perform. In one transformation, every character in s is replaced according to the following rules:

    If the character is 'z', replace it with the string "ab".
    Otherwise, replace it with the next character in the alphabet. For example, 'a' is replaced with 'b', 'b' is replaced with 'c', and so on.

Return the length of the resulting string after exactly t transformations.

Since the answer may be very large, return it modulo 109 + 7.



Example 1:

Input: s = "abcyy", t = 2

Output: 7

Explanation:

    First Transformation (t = 1):
        'a' becomes 'b'
        'b' becomes 'c'
        'c' becomes 'd'
        'y' becomes 'z'
        'y' becomes 'z'
        String after the first transformation: "bcdzz"
    Second Transformation (t = 2):
        'b' becomes 'c'
        'c' becomes 'd'
        'd' becomes 'e'
        'z' becomes "ab"
        'z' becomes "ab"
        String after the second transformation: "cdeabab"
    Final Length of the string: The string is "cdeabab", which has 7 characters.

Example 2:

Input: s = "azbk", t = 1

Output: 5

Explanation:

    First Transformation (t = 1):
        'a' becomes 'b'
        'z' becomes "ab"
        'b' becomes 'c'
        'k' becomes 'l'
        String after the first transformation: "babcl"
    Final Length of the string: The string is "babcl", which has 5 characters.



Constraints:

    1 <= s.length <= 105
    s consists only of lowercase English letters.
    1 <= t <= 105

*/

#include <iostream>
#include <string>

using namespace std;

int lengthAfterTransformations(string s, int t)
{

    while (t != 0)
    {
        int i = 0;

        while (i < s.size())
        {
            if ((s[i] >= 'a') && (s[i] <= 'z'))
            {

                if (s[i] == 'z')
                {
                    s.replace(i, 1, "ab");
                    i += 2;
                }
                else
                {
                    s[i] = char(s[i] + 1);
                    i++;
                }
            }
            else
            {
                i++;
            }
        }
        t--;
    }

    cout << s << endl;
    return s.size();
}

int main()
{
    string s = "abcyy";
    int t = 2;
    cout << lengthAfterTransformations(s, t) << endl;
    return 0;
}