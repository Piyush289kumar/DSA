/* Q14: Maximum Occuring Character (GFG)
Difficulty: BasicAccuracy: 53.55%Submissions: 108K+Points: 1

Given a string str of lowercase alphabets. The task is to find the maximum occurring character in the string str. If more than one character occurs the maximum number of time then print the lexicographically smaller character.

Example 1:

Input:
str = testsample
Output: e
Explanation: e is the character which
is having the highest frequency.

Example 2:

Input:
str = output
Output: t
Explanation:  t and u are the characters
with the same frequency, but t is
lexicographically smaller.

Your Task:
The task is to complete the function getMaxOccuringChar() which returns the character which is most occurring.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Number of distinct characters).
Note: N = |s|

Constraints:
1 ≤ |s| ≤ 100*/

#include <iostream>
#include <vector>

using namespace std;

char getMaxOccuringChar(string str)
{
    int count[26] = {0};

    for (int i = 0; i < str.size(); i++)
    {
        if ('a' <= str[i] && 'z' >= str[i])
        {
            count[str[i] - 'a']++;
        }
        else
        {
            count[str[i] - 'A']++;
        }
    }

    // Find Max Element
    int maxIdx = 0;

    for (int i = 0; i < 26; i++)
    {
        if (count[maxIdx] < count[i])
        {
            maxIdx = i;
        }
    }
    return maxIdx + 'a';
}

int main()
{
    //string str = "output";
    string str = "testsample";
    // string str = "aabbacc";
    
    cout << "RESPONSE ==> " << getMaxOccuringChar(str);
    return 0;
}