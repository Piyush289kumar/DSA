/* Q10: Sum of AP series

Formula = (n * (2a + (n - 1) d) / 2;

Difficulty: BasicAccuracy: 31.98%Submissions: 21K+Points: 1

A series with same common difference is known as arithmetic series. The first term of series is 'a' and common difference is d. The series looks like a, a + d, a + 2d, a + 3d, . . . Find the sum of series upto nth term.



Example 1:

Input: n = 5, a = 1, d = 3
Output: 35
Explanation: Series upto 5th term is
1 4 7 10 13, so sum will be 35.

Example 2:

Input: n = 3, a = 1, d = 2
Output: 9
Example: Series upto 3rd term is
1 3 5, so sum will be 9.



Your Task:
You don't need to read or print anything. Your task is to complete the function sum_of_ap() which takes n, a and d as input parameter and returns the sum of the series.


Expected Time Complexity: O(1)
Expected Space Complexity: O(1)*/

#include <iostream>

using namespace std;

long sum_of_ap(long n, long a, long d)
{
    return ((n * (2 * a + (n - 1) * d)) / 2);
}

int main()
{
    long n = 5, a = 1, d = 3;

    cout << "RESPONSE ==> " << sum_of_ap(n, a, d);

    return 0;
}