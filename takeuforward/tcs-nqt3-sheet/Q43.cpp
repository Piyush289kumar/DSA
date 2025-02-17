/* Q43: Calculate the Power of a Number : Binary Exponentiation. */

#include <bits/stdc++.h>
using namespace std;

int powerOfNumber(int N, int R)
{
    const int mod = 1e9 + 7;

    int res = 1;

    while (R > 0)
    {
        if ((R & 1))
        {
            res = ((res % mod) * 1ll * (N % mod)) % mod;
        }

        N = ((N % mod) * 1ll * (N % mod)) % mod;
        R >>= 1;
    }

    return res % mod;
}

int main()
{
    int X, N;
    cin >> X >> N;

    cout << powerOfNumber(X, N) << endl;

    return 0;
}