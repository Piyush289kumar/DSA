/* Q41: Print Fibonacci Series up to Nth term. */

#include <bits/stdc++.h>
using namespace std;

vector<int> fibonacciSeries(int num)
{
    vector<int> ans;
    ans.push_back(0);
    ans.push_back(1);

    for (int i = 1; i < num; i++)
    {
        ans.push_back(ans[i - 1] + ans[i]);
    }

    return ans;
}

int main()
{
    int N;
    cin >> N;

    vector<int> res = fibonacciSeries(N);
    for (int num : res)
    {
        cout << num << ", ";
    }

    return 0;
}