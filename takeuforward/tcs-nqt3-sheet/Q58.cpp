/* Q58: Calculate the Area of the Circle. */
#include <bits/stdc++.h>
using namespace std;

double areaOfCircle(int N)
{
    return 3.14 * N * N;
}

int main()
{
    int N;
    cin >> N;
    cout << areaOfCircle(N) << endl;
    return 0;
}