/* Q44: Factors of a Given Number. */

#include <bits/stdc++.h>
using namespace std;

vector<int> findFactores(int num)
{
    if (num == 0 || num == 1)
    {
        return {num};
    }

    vector<int> ans;

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            ans.push_back(i);
        }
    }

    return ans;
}

int main()
{
    int N;
    cin >> N;
    vector<int> res = findFactores(N);

    for (int num : res)
    {
        cout << num << ", ";
    }

    return 0;
}