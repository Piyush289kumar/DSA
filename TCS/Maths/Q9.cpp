/* Q9: Primes sum
Difficulty: EasyAccuracy: 29.18%Submissions: 44K+Points: 2

Given a number N. Find if it can be expressed as sum of two prime numbers.

Example 1:

Input: N = 34
Output: "Yes"
Explanation: 34 can be expressed as
sum of two prime numbers.

Example 2:

Input: N = 23
Output: "No"
Explanation: 23 cannnot be expressed as
sum of two prime numbers.


Your Task:
You dont need to read input or print anything. Complete the function isSumOfTwo() which takes N as input parameter and returns "Yes" if can be expressed as sum of two prime numbers. else return "No".

Expected Time Complexity: O(N*sqrt(N))
Expected Auxiliary Space: O(1)

Constraints:
1 <= N <= 10^5


=============================
Time Complexity: O(√n)
Space Complexity: O(1)
*/

#include <iostream>

using namespace std;

bool isPrime(int num)
{
    if (num <= 1)
        return false;

    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

string isSumOfTwo(int n)
{
    if (n <= 2)
        return "No";

    // Formula = x + y = n

    for (int x = 0; x < n; x++)
    {
        int y = n - x;

        if (isPrime(x) && isPrime(y))
        {
            if ((x + y) == n)
            {
                return "Yes";
            }
        }
    }

    return "No";
}

int main()
{
    int n = 23;
    cout << "RESPOSNE ==> " << isSumOfTwo(n);
    return 0;
}