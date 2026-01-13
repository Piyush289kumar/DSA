/* Q37: Print all Prime Factors of the given number. */

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int N)
{
    if (N <= 1)
        return false;
    int cnt = 1;
    for (int i = 2; i < N; i++)
    {
        if (N % i == 0)
            cnt++;
    }

    return ((cnt >= 2) ? false : true);
}

vector<int> primeFactor(int N)
{
    if (N == 1)
        return {0};

    vector<int> ans;

    for (int i = 2; i*i <= N; i++)
    {
        if (N % i == 0)
        {
            if (isPrime(i))
                ans.push_back(i);

            if (N / i != i)
            {
                if (isPrime(N / i))
                    ans.push_back(N / i);
            }
        }
    }

    return ans;
}

int main()
{
    int N;
    cin >> N;

    vector<int> ans = primeFactor(N);

    // output
    for (auto n : ans)
        cout << n << " ";

    return 0;
}