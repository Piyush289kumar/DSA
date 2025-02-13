/* Q36: Greatest of two numbers. */

#include <bits/stdc++.h>
using namespace std;

double GreatestNumber(double a, double b)
{
    return (a > b) ? a : b;
}

int main()
{
    double a, b;
    cin >> a >> b;
    cout << GreatestNumber(a, b) << endl;
    return 0;
}