/* Q3: Pangram Strings
Difficulty: EasyAccuracy: 49.94%Submissions: 12K+Points: 2

Check if the given string S is a Panagram or not. A pangram is a sentence containing every letter in the English Alphabet.

Example 1:

Input: S = "Pack mY box witH fIve dozen
            liquor jugs"
Output: 1
Explanation: Given string contains all
English Alphabets.

Example 2:

Input: S = "geeksFORgeeks"
Output: 0
Explanation: Given string does not contain
all English Alphabets.

Your Task:
You don't need to read input or print anything. Your task is to complete the function isPanagram() which takes the string as inputs and returns 1 if the given string is panagram, otherwise 0.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(constant)
*/

#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using namespace std;

int isPanagram(string S)
{
    if (S.length() < 26)
        return false;

    vector<bool> seen(26, false);
    int uniqueCharCount = 0;

    for (char c : S)
    {
        if (isalpha(c))
        {
            c = tolower(c);

            int idx = c - 'a';

            if (!seen[idx])
            {
                seen[idx] = true;
                uniqueCharCount++;
            }
        }
    }

    return (uniqueCharCount == 26);
}

int main()
{
    string S = "geeksFORgeeks";

    cout << isPanagram(S);

    return 0;
}