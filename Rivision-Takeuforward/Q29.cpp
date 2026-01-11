/* Q29: Program to find Sum of GP Series. */

#include <bits/stdc++.h>
using namespace std;

float gpSum(int a, float r, int n)
{
    double sum = 0;
    double term = a;

    for (int i = 0; i < n; i++)
    {
        sum += term;
        term *= r;
    }

    return sum;
}

int main()
{
    int a, n;
    float r;
    cin >> a >> r >> n;

    cout << gpSum(a, r, n) << endl;

    return 0;
}