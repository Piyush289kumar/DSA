/* Q48: Find GCD of two numbers. */

#include <bits/stdc++.h>
using namespace std;

int find_gcd(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    if (b == 0)
    {
        return a;
    }

    if (a > b)
    {
        return find_gcd(a - b, b);
    }
    else
    {
        return find_gcd(b - a, a);
    }
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << find_gcd(a, b) << endl;
    return 0;
}