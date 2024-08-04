/* Q8: Calculate n^m. */

#include <bits/stdc++.h>
using namespace std;

int calculatePower(int n, int m)
{

    if (m == 0)
        return 1;

    if (m == 1)
        return n;

    int ans = pow(n, m / 2);

    if (m % 2 == 0)
        return ans * ans;
    else
        return n * ans * ans;
}

int main()
{
    int n = 3;
    int m = 10;
    int result = calculatePower(n, m);

    cout << "OUTPUT : " << result;
}