/* Q2 : Palindrome
Difficulty: BasicAccuracy: 56.28%Submissions: 88K+Points: 1

Given an integer, check whether it is a palindrome or not.

Note : Strings which read the same backwards as forwards , eg - MADAM, MOM etc.

Example 1:

Input: n = 555
Output: Yes


Example 2:

Input: n = 123
Output: No



Your Task:
You don't need to read or print anything. Your task is to complete the function is_palindrome() which takes the number as input parameter and returns "Yes" if it is palindrome otherwise returns "No"(Without quotes).


Expected Time Complexity: O(x)
Expected Space Complexity: O(x) where x is number of digits in n.


Constraints:
1 <= n <= 1000*/

#include <iostream>
#include <vector>

using namespace std;

string is_palindrome(int n)
{
    if (n <= 1)
        return "Yes";

    string ans;

    int org = n;
    int reverse = 0;

    while (n != 0)
    {
        reverse = reverse * 10 + (n % 10);

        n /= 10;
    }

    return ((org == reverse) ? "Yes" : "No");
}

int main()
{
    int n = 10;
    string ans = is_palindrome(n);
    cout << "RESPONSE ==> " << ans;

    return 0;
}