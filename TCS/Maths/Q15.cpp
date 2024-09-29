/* Q15: LCM And GCD

Difficulty: Basic

============================================

Formula : LCM of two numbers = product of two numbers ÷ HCF of two numbers.

============================================

Given two integers a and b, write a function lcmAndGcd() to compute their LCM and GCD. The function takes two integers a and b as input and returns a list containing their LCM and GCD.

Example 1:

Input: a = 5 , b = 10
Output: 10 5
Explanation: LCM of 5 and 10 is 10, while their GCD is 5.

Input: a = 14 , b = 8
Output: 56 2
Explanation: LCM of 14 and 8 is 56, while their GCD is 2.

Expected Time Complexity: O(log(min(a, b))
Expected Auxiliary Space: O(1)

Constraints:
1 <= a, b <= 10^9*/

#include <iostream>
#include <vector>

using namespace std;

long long gcd(long long a, long long b)
{
    while (b != 0)
    {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

vector<long long> lcmAndGcd(long long a, long long b)
{
    long long hcf = gcd(a, b);

    // NOTE :
    // long long lcm = (a * b) / hcf;
    // Use (a / hcf) to avoid overflow when calculating LCM

    long long lcm = (a / hcf) * b;

    return {lcm, hcf};
}

int main()
{
    long long a = 5, b = 10;

    vector<long long> res = lcmAndGcd(a, b);

    cout << endl
         << endl
         << "RESPONSE ==> ";
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }

    return 0;
}