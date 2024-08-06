/* Q10: 1281. Subtract the Product and Sum of Digits of an Integer
Easy
Topics
Companies
Hint
Given an integer number n, return the difference between the product of its digits and the sum of its digits.
Example 1:
Input: n = 234
Output: 15
Explanation:
Product of digits = 2 * 3 * 4 = 24
Sum of digits = 2 + 3 + 4 = 9
Result = 24 - 9 = 15
Example 2:
Input: n = 4421
Output: 21
Explanation:
Product of digits = 4 * 4 * 2 * 1 = 32
Sum of digits = 4 + 4 + 2 + 1 = 11
Result = 32 - 11 = 21
Constraints:
    1 <= n <= 10^5
*/
#include <iostream>
using namespace std;
/* Recursion
===================
int subtractProductAndSum(int n, int pro, int sum)
{
    if (n == 0)
        return pro - sum;
    int lastDigit = n % 10;
    pro *= lastDigit;
    sum += lastDigit;
    return subtractProductAndSum(n / 10, pro, sum);
}*/
int subtractProductAndSum(int n)
{
    int pro = 1, sum = 0;
    while (n != 0)
    {
        pro *= n % 10;
        sum += n % 10;
        n /= 10;
    }
    return pro - sum;
}
int main()
{
    int n = 10;
    int pro = 1;
    int sum = 0;
    int ans = subtractProductAndSum(n);
    cout << "OUTPUT : " << ans;
    return 0;
}