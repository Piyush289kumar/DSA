/* Q4. LCM And GCD. */

#include <bits/stdc++.h>
using namespace std;

int gcdfnc(int a, int b)
{
    if (b == 0)
        return a;

    return gcdfnc(b, a % b);
}

int main()
{
    int a, b;
    cin >> a >> b;

    int gcd = gcdfnc(a, b);
    int lcm = (a * b) / gcd;

    cout << gcd << endl;
    cout << lcm << endl;

    return 0;
}