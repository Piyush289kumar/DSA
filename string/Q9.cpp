/* Q9: 125. Valid Palindrome
Easy
Topics
Companies
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.
Given a string s, return true if it is a palindrome, or false otherwise.
Example 1:
Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
Example 2:
Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.
Example 3:
Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.
Constraints:
    1 <= s.length <= 2 * 105
    s consists only of printable ASCII characters.
 */
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
bool isPalindrome(string s)
{

    if (s.size() <= 1)
        return true;
    int head = 0;
    int tail = s.size() - 1;
    while (head < tail)
    {

        cout << "tolower(s[head]) : " << s[head] << endl;
        cout << "tolower(s[tail]) : " << s[tail] << endl
             << endl;

        while (head > tail && isalpha(s[head]) == 0)
        {
            head++;
        }
        while (head > tail && isalpha(s[tail]) == 0)
        {
            tail--;
        }
        if (tolower(s[head]) != tolower(s[tail]))
        {
            return false;
        }
        head++;
        tail--;
    }
    return true;
}
int main()
{
    // string s = "A man, a plan, a canal: Panama";
    string s = "race a car";
    // string s = "0P";
    cout << "OUTPUT: " << (isPalindrome(s) ? "True" : "False");
    return 0;
}