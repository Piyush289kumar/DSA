/* Q17: Binary number to decimal number
Difficulty: Basic

Given a Binary Number B, find its decimal equivalent.


Example 1:

Input: B = 10001000
Output: 136

Example 2:

Input: B = 101100
Output: 44



Your Task:
You don't need to read or print anything. Your task is to complete the function binary_to_decimal() which takes the binary number as string input parameter and returns its decimal equivalent.


Expected Time Complexity: O(K * Log(K)) where K is number of bits in binary number.
Expected Space Complexity: O(1)


Constraints:
1 <= number of bits in binary number  <= 16
*/

#include <iostream>
#include <string>

using namespace std;

int binary_to_decimal(string str)
{
    int decimal = 0;

    for (int i = 0; i < str.size(); i++)
    {
        decimal = decimal * 2 + (str[i] - '0');
    }

    return decimal;
}

int main()
{
    string str = "1000000";

    cout << binary_to_decimal(str);

    return 0;
}