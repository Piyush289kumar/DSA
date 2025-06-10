/* Q4.Triangle Pattern. */

#include <bits/stdc++.h>
using namespace std;

void triangle(int N)
{
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N - i; j++)
        {
            cout << " ";
        }
        for (int s = 1; s <= ((2 * i) - 1); s++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void revTriangle(int N)
{
    for (int i = N; i >= 1; i--)
    {
        for (int j = (N - i); j >= 1; j--)
        {
            cout << " ";
        }
        for (int s = ((2 * i) - 1); s >= 1; s--)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int N;
    cin >> N;

    triangle(N);
    cout << endl;
    revTriangle(N);

    return 0;
}
