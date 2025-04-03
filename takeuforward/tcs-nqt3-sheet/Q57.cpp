/* Q57: Express given number as Sum of Two Prime Numbers. */

#include <bits/stdc++.h>
using namespace std;

vector<bool> seive(int N)
{
    vector<bool> primes(N + 1, true);
    primes[0] = primes[1] = false;

    for (int i = 2; i * i <= N; i++)
    {
        if (primes[i])
        {
            for (int j = i * i; j <= N; j += i)
            {
                primes[j] = false;
            }
        }
    }

    return primes;
}

bool sumOfTwoPrimes(vector<bool> &primes, int &N)
{
    if (N < 4)
        return false;

    for (int i = 2; i < N / 2; i++)
    {
        int b = N - i;

        if (primes[i] && primes[b])
            return true;
    }

    return false;
}

int main()
{
    int N;
    cin >> N;

    vector<bool> primes = seive(N);

    cout << (sumOfTwoPrimes(primes, N) ? "True" : "False") << endl;

    return 0;
}