/* Q6: GCD of two numbers

Formula ==> GCD(a-b, a);

Difficulty: Basic

Given two positive integers a and b, find GCD of a and b.

Note: Don't use the inbuilt gcd function

Example 1:

Input:
a = 3
b = 6
Output: 3
Explanation: GCD of 3 and 6 is 3


Example 2:

Input:
a = 1
b = 1
Output: 1
Explanation: GCD of 1 and 1 is 1


Your Task:
You don't need to read input or print anything. Complete the function gcd() which takes two positive integers as input parameters and returns gcd of a and b as an integer.

Expected Time Complexity: O(log(min(a, b)))
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ a, b ≤ 10^9*/

#include <iostream>

using namespace std;

int findGCD(int a, int b)
{

    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int main()
{
    int a = 3, b = 6;
    int res = findGCD(a, b);
    cout << "RESPONSE ==> " << res;

    return 0;
}