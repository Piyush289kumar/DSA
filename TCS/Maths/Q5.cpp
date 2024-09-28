/* Q5: Prime Factors
Difficulty: Easy

Given a number N. Find its unique prime factors in increasing order.


Example 1:

Input: N = 100
Output: 2 5
Explanation: 2 and 5 are the unique prime
factors of 100.

Example 2:

Input: N = 35
Output: 5 7
Explanation: 5 and 7 are the unique prime
factors of 35.



Your Task:
You don't need to read or print anything. Your task is to complete the function AllPrimeFactors() which takes N as input parameter and returns a list of all unique prime factors of N in increasing order.



Expected Time Complexity: O(N)
Expected Space Complexity: O(N)


Constraints:
1 <= N  <= 10^6
*/

#include <iostream>
#include <vector>

using namespace std;

void solve(int n, vector<int> &ans)
{
    vector<int> helper(n + 1, true);
    vector<int> allPrime;

    helper[0] = helper[1] = false;
    for (int i = 2; i <= n; i++)
    {
        if (helper[i])
        {
            allPrime.push_back(i);

            for (int j = i; j <= n; j = j + i)
            {
                helper[j] = false;
            }
        }
    }

    for (int i = 0; i < allPrime.size(); i++)
    {
        if (n % allPrime[i] == 0)
        {
            ans.push_back(allPrime[i]);
        }
    }
}

vector<int> AllPrimeFactors(int n)
{
    vector<int> ans;

    if (n <= 1)
        return ans;

    solve(n, ans);

    return ans;
}

int main()
{

    int n = 2;
    vector<int> ans = AllPrimeFactors(n);

    cout << endl
         << endl
         << "RESPONSE ==> ";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}