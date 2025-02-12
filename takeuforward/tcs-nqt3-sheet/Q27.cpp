/* Q27: Check if a number is prime or not. */
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num)
{
    if (num == 1)
    {
        return false;
    }

    for (int i = 2; i < sqrt(num); i++)
    {
        if (num % i == 2)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int N;
    cin >> N;
    cout << isPrime(N) << endl;
    return 0;
}