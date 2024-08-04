/* Q8: Calculate n^m. */

#include <bits/stdc++.h>
using namespace std;

double calculatePower(double n, int m)
{

    if (m == 0)
        return 1;

    if (m == 1)
        return n;

    double ans = pow(n, m / 2);

    if (m % 2 == 0)
        return ans * ans;
    else
        return n * ans * ans;
}

int main()
{
    double n = 2.10000;
    int m = 3;
    double result = calculatePower(n, m);

    cout << "OUTPUT : " << result;
}