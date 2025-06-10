/* Q6: Leap Year or Not. */

#include <bits/stdc++.h>
using namespace std;

bool is_leapyear(int N)
{

    return (((N % 4 == 0) && (N % 100 != 0)) || (N % 400 == 0));
}

int main()
{
    int N;
    cin >> N;

    cout << (is_leapyear(N) ? "True" : "False");

    return 0;
}