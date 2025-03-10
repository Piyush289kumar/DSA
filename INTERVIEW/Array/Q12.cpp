/* Q12: Factorials of large numbers
Difficulty: MediumAccuracy: 36.57%Submissions: 151K+Points: 4

Given an integer N, find its factorial. return a list of integers denoting the digits that make up the factorial of N.

Example 1:

Input: N = 5
Output: [1,2,0]
Explanation : 5! = 1*2*3*4*5 = 120

Example 2:

Input: N = 10
Output: [3,6,2,8,8,0,0]
Explanation :
10! = 1*2*3*4*5*6*7*8*9*10 = 3628800


Your Task:
You don't need to read input or print anything. Complete the function factorial() that takes integer N as input parameter and returns a list of integers denoting the digits that make up the factorial of N.


Expected Time Complexity : O(N2)
Expected Auxilliary Space : O(1)*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> factorial(int n)
{
    vector<int> res;
    res.push_back(1);

    for (int num = 2; num <= n; num++)
    {
        int carry = 0;

        for (int idx = 0; idx < res.size(); idx++)
        {
            int product = res[idx] * num + carry;
            res[idx] = product % 10;
            carry = product / 10;
        }

        while (carry != 0)
        {
            res.push_back(carry % 10);
            carry /= 10;
        }
    }

    reverse(res.begin(), res.end());

    return res;
}

int main()
{
    int n = 10;

    vector<int> res = factorial(n);

    cout << "RESPONSE ==> ";
    for (int i : res)
    {
        cout << i;
    }

    return 1;
}