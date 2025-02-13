/* Q37: Greatest of three numbers. */

#include <bits/stdc++.h>
using namespace std;

double GreatestNumber(double a, double b, double c)
{
    return max(a, max(b, c));
}

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    cout << GreatestNumber(a, b, c) << endl;
    return 0;
}