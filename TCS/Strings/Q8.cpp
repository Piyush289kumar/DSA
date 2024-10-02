/* Q8: Encrypt the string - 1
Difficulty: BasicAccuracy: 36.55%Submissions: 15K+Points: 1

Bingu was testing all the strings he had at his place and found that most of them were prone to a vicious attack by Banju, his arch-enemy. Bingu decided to encrypt all the strings he had, by the following method. Every substring of identical letters is replaced by a single instance of that letter followed by the number of occurrences of that letter. Then, the string thus obtained is further encrypted by reversing it.

Example 1:

Input:
s = "aabc"
Output: 1c1b2a
Explanation: aabc
Step1: a2b1c1
Step2: 1c1b2a

Example 2:

Input:
s = "aaaaa"
Output: 5a
Explanation: aaaaa
Step 1: a5
Step 2: 5a

Your Task:
You don't need to read input or print anything.Your task is to complete the function encryptString() which takes a single argument(s) and returns the encrypted string.

Expected Time Complexity: O(|s|).
Expected Auxiliary Space: O(|s|).

======================================

Time Complexity (TC): O(n).
Space Complexity (SC): O(n).

======================================



*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

string to_hex(int n)
{
    if (n == 0)
        return "0";

    string hex = "";
    string hexChar = "0123456789ABCDEF";

    while (n != 0)
    {
        int digit = n % 16;
        hex = hexChar[digit] + hex;
        n /= 16;
    }

    return hex;
}

string encryptString(string s)
{
    string encryptStr = "";

    int n = s.length();

    int fq = 1;

    for (int i = 1; i <= s.length(); i++)
    {
        if (i < n && s[i] == s[i - 1])
        {
            fq++;
        }
        else
        {
            encryptStr = to_hex(fq) + s[i - 1] + encryptStr;
            fq = 1;
        }
    }

    return encryptStr;
}

int main()
{
    string s = "aabc";

    string res = encryptString(s);

    cout << "RESPONSE ==> " << res;

    return 0;
}
