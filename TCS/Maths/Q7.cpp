/* Q7: Armstrong Numbers
Difficulty: Easy

You are given a 3-digit number n, Find whether it is an Armstrong number or not.

    An Armstrong number of three digits is a number such that the sum of the cubes of its digits is equal to the number itself. 371 is an Armstrong number since 33 + 73 + 13 = 371.

Note: Return "true" if it is an Armstrong number else return "false".

Examples

Input: n = 153
Output: true
Explanation: 153 is an Armstrong number since 13 + 53 + 33 = 153. Hence answer is "true".

Input: n = 372
Output: false
Explanation: 372 is not an Armstrong number since 33 + 73 + 23 = 378. Hence answer is "false".

Expected Time Complexity: O(1)
Expected Auxiliary Space: O(1)

Constraints:
100 ≤ n <1000 */

#include <iostream>
using namespace std;

string armstrongNumber(int n)
{
    int copy = n;

    int ans = 0;

    while (copy != 0)
    {
        int lastDigit = copy % 10;
        ans = ans + (lastDigit * lastDigit * lastDigit);
        copy /= 10;
    }

    return ((n == ans) ? "true" : "false");
}

int main()
{
    int n = 153;

    cout << "RESPONSE ==> " << armstrongNumber(n);
    return 0;
}