/* Q34: Find Sum of AP Series.

Formula : Snth = n/2 * ( 2a + (n - 1)d)
*/
#include <bits/stdc++.h>
using namespace std;

double sumOfAPSeries(int n, double a, double d)
{
    // double sum = 0.0;
    // for (int i = 0; i < n; i++)
    // {
    //     sum += a;
    //     a += d;
    // }

    // return sum;

    return (n * (2 * a + (n - 1) * d) / 2);
}

int main()
{
    double a, d;
    int n;
    cin >> n >> a >> d;
    cout << sumOfAPSeries(n, a, d) << endl;
    return 0;
}