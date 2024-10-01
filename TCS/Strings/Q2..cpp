/* Q2: Anagram Strings
Difficulty: BasicAccuracy: 49.66%Submissions: 11K+Points: 1

Given two strings S1 and S2 . Print "1" if both strings are anagrams otherwise print "0" .

Note: An anagram of a string is another string with exactly the same quantity of each character in it, in any order.

Example 1:

Input: S1 = "cdbkdub" , S2 = "dsbkcsdn"
Output: 0
Explanation: Length of S1 is not same
as length of S2.

Example 2:

Input: S1 = "geeks" , S2 = "skgee"
Output: 1
Explanation: S1 has the same quantity
of each character in it as S2.


Your Task:
You don't need to read input or print anything. Your task is to complete the function areAnagram() which takes S1 and S2 as input and returns "1" if both strings are anagrams otherwise returns "0".

Expected Time Complexity: O(n)
Expected Auxiliary Space: O(K) ,Where K= Contstant

Constraints:
1 <= |S1| <= 1000
1 <= |S2| <= 1000
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int areAnagram(string S1, string S2)
{
    if (S1.length() != S2.length())
    {
        return false;
    }

    vector<int> fq(26, 0);

    // Fq for S1

    for (char c : S1)
    {
        fq[c - 'a']++;
    }

    // Fq for S2
    for (char c : S2)
    {
        fq[c - 'a']--;
    }

    // Check Fq and Return Ans

    for (int f : fq)
    {
        if (f != 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    string S1 = "cdbkdub", S2 = "dsbkcsdn";
    // string S1 = "geeks", S2 = "skgee";

    int res = areAnagram(S1, S2);

    cout << (res ? "True" : "False");

    return 0;
}