/* Q11: Sum of GP

Formula ==> a(r^n - 1) / (r - 1)

Difficulty: Basic

Given n, a and r as the number of terms, first term and common ratio respectively of an Geometric Progression Series. Find the sum of the series upto nth term.


Example 1:

Input: 3 3 2
Output: 21
Explanation: Series upto 3td term is
3 6 12, so sum will be 21.


Example 2:

Input: 3 1 2
Output: 7
Example: Series upto 3rd term is
1 2 4, so sum will be 7.



Your Task:
You don't need to read or print anything. Your task is to complete the function sum_of_gp() which takes n, a and r as input parameter and returns the sum of the series.


Expected Time Complexity: O(1)
Expected Space Complexity: O(1)


Constranits:
1 <= n, a, r <= 10
*/

#include <iostream>
#include <cmath>

using namespace std;

long sum_of_gp(long n, long a, long r)
{

    if (r == 1)
        return a * n; // Special case when r = 1, the sum is simply a*n

    return a * (pow(r, n) - 1) / (r - 1);
}

int main()
{
    long n = 3, a = 1, r = 2;

    cout << "RESPONSE ==> " << sum_of_gp(n, a, r);

    return 0;
}