/* Q35: Program to find Sum of GP Series.

Formula : Sum of Nth Term : a ( r ^ n - 1 ) / (r - 1)*/

#include <bits/stdc++.h>
using namespace std;

double sumOfGPSeries(double a, double r, int n)
{

    // double sum = 0.0;
    // for (int i = 0; i < n; i++)
    // {
    //     sum += a;
    //     a = a * r;
    // }

    // return sum;

    return (a * (pow(r, n) - 1) / (r - 1));
}

int main()
{
    double a, r;
    int n;
    cin >> a >> r >> n;

    cout << sumOfGPSeries(a, r, n) << endl;

    return 0;
}