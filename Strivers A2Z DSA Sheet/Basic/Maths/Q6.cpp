/* Q6: Sum 1 to n Divisors. */

#include <bits/stdc++.h>
using namespace std;

long long sumOfDivisors(long long N)
{
    long long ans = 0;

    for (long long i = 1; i <= N; i++)
    {
        ans += i * (N / i);
    }

    return ans;
}

int main()
{
    long long N;
    cin >> N;

    cout << sumOfDivisors(N);

    return 0;
}