/* Q12: Leap Year

Difficulty: Basic

==============================================================================

The formula to determine if a year is a leap year follows these rules:

    A year is a leap year if it is divisible by 4.
    However, if the year is divisible by 100, it is not a leap year unless:
    The year is also divisible by 400, in which case it is a leap year.

==============================================================================

For an input year N, find whether the year is a leap or not.


Example 1:

Input:
N = 4
Output:
1
Explanation:
4 is not divisible by 100
and is divisible by 4 so its
a leap year

Example 2:

Input:
N = 2021
Output:
0
Explanation:
2021 is not divisible by 100
and is also not divisible by 4
so its not a leap year


Your Task:
You don't need to read input or print anything. Your task is to complete the function isLeap() which takes an integer N as input parameter and returns 1 if N is a leap year and 0 otherwise.


Expected Time Complexity: O(1)
Expected Space Complexity: O(1)


Constraints:
1<=N<=9999

*/

#include <iostream>

using namespace std;

int isLeap(int n)
{
    return ((n % 4 == 0) && (n % 100 != 0) || (n % 400 == 0));
}

int main()
{
    int n = 4;

    cout << "RESPONSE ==> " << isLeap(n);

    return 0;
}