/* Q5. 69. Sqrt(x)
Easy
Topics
Companies

Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.
You must not use any built-in exponent function or operator.
    For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.
Example 1:
Input: x = 4
Output: 2
Explanation: The square root of 4 is 2, so we return 2.
Example 2:
Input: x = 8
Output: 2
Explanation: The square root of 8 is 2.82842..., and since we round it down to the nearest integer, 2 is returned.
Constraints:
    0 <= x <= 231 - 1
*/

#include <iostream>
using namespace std;

long long int binarySearch(int start, int end, int target, int ans)
{
    if (end < start)
    {
        return ans;
    }

    long long int mid = ((start + end) / 2);
    long long int square = mid * mid;

    if (square == target)
    {
        return mid;
    }
    if (square < target)
    {
        ans = mid;
        return binarySearch(mid + 1, end, target, ans);
    }
    else
    {
        return binarySearch(start, mid - 1, target, ans);
    }
}
int mySqrt(int x)
{
    int start = 0;
    int end = x;
    int target = x;
    int ans = 0;
    return binarySearch(start, end, target, ans);
}

int main()
{
    int x = 2147395599;
    cout << "OUTPUT : " << mySqrt(x);
    return 0;
}