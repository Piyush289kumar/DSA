/* Q1: Palindrome String
Difficulty: EasyAccuracy: 51.21%Submissions: 355K+Points: 2

Given a string S, check if it is palindrome or not.

Example 1:

Input: S = "abba"
Output: 1
Explanation: S is a palindrome

Example 2:

Input: S = "abc"
Output: 0
Explanation: S is not a palindrome

Your Task:
You don't need to read input or print anything. Complete the function isPalindrome()which accepts string S and returns an integer value 1 or 0.

Expected Time Complexity: O(Length of S)
Expected Auxiliary Space: O(1)
*/

#include <iostream>
#include <string>

using namespace std;

int isPalindrome(string S)
{

    int n = S.length();

    if (n <= 1)
        return true;

    int start = 0, end = n - 1;

    while (start <= end)
    {
        if (S[start] != S[end])
            return false;

        start++;
        end--;
    }

    return true;
}

int main()
{

    string S = "abc";

    int res = isPalindrome(S);

    cout << (res ? "Ture" : "False");

    return 0;
}