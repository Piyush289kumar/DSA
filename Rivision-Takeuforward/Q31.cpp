/* Q31: Factorial of a number. */

#include <bits/stdc++.h>

using namespace std;

long long factorial(int N)
{
    long long fact = 1;
    for (int i = 1; i <= N; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int N;
    cin >> N;
    cout << factorial(N);
    return 0;
}