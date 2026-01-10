/* Q25: Find Sum of AP Series. */

#include <bits/stdc++.h>

using namespace std;

int apsum(int n, int a, int d)
{
    int sum = 0.0;
    for (int i = 0; i < n; i++)
    {
        sum += a;
        a += d;
    }
    return sum;
}

int main()
{
    int n, a, d;
    cin >> n >> a >> d;

    cout << "AP sum : " << apsum(n, a, d) << endl;

    return 0;
}