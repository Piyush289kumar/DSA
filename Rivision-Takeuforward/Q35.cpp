/* Q35: Calculate the Power of a Number : Binary Exponentiation. */

#include <bits/stdc++.h>
using namespace std;

double cusPow(double x, int n)
{
    double ans = 1.0;
    long long exp = n;
    if (exp < 0)
        exp = -exp;

    while (exp > 0)
    {
        if (exp % 2 == 1)
        {
            ans *= x;
            exp--;
        }
        else
        {
            exp /= 2;
            x *= x;
        }
    }

    if (n < 0)
        ans = 1.0 / ans;

    return ans;
}

int main()
{
    double x;
    int n;
    cin >> x >> n;
    cout << cusPow(x, n) << endl;
    return 0;
}