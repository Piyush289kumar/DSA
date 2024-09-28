/* Q8: Nth Fibonacci Number
Difficulty: EasyAccuracy: 22.3%Submissions: 332K+Points: 2

Given a positive integer n, find the nth fibonacci number. Since the answer can be very large, return the answer modulo 1000000007.

Note: for the reference of this question take first fibonacci number to be 1.

Examples :

Input: n = 2
Output: 1
Explanation: 1 is the 2nd number of fibonacci series.

Input: n = 5
Output: 5
Explanation: 5 is the 5th number of fibonacci series.

Expected Time Complexity: O(n)
Expected Auxiliary Space: O(n)

Constraints:
1<= n <=10^5*/

#include <iostream>
#include <vector>

using namespace std;

int nthFibonacci(int n)
{
    if (n == 1 || n == 2)
        return 1;

    int mod = 1000000007;

    vector<int> fibonacciSr(n + 1, 0);

    fibonacciSr[1] = 1;
    fibonacciSr[2] = 1;

    for (int i = 3; i <= n; i++)
    {
        fibonacciSr[i] = (fibonacciSr[i - 1] + fibonacciSr[i - 2]) % mod;
    }

    return fibonacciSr[n];
}

int main()
{
    int n = 5;

    cout << "RESPONSE ==> " << nthFibonacci(n);
    return 0;
}