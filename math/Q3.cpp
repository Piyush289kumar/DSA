/* Q3:  Modular Exponentiation - Coding Ninjas
Easy

Problem statement

You are given a three integers 'X', 'N', and 'M'. Your task is to find ('X' ^ 'N') % 'M'. A ^ B is defined as A raised to power B and A % C is the remainder when A is divided by C.
Detailed explanation ( Input/output format, Notes, Images )
Constraints :

1 <= T <= 100

1 <= X, N, M <= 10^9
Time limit: 1 sec
*/

#include <iostream>

using namespace std;

int modularExponentiation(int x, int n, int m)
{

    int response = 1;

    x = x % m;

    while (n > 0)
    {
        if (n % 2 != 0)
        {
            response = (1LL * response * x) % m;
        }
        x = (1LL * x * x) % m;
        n = n / 2;
    }
    return response;
}

int main()
{

    int x = 4;
    int n = 3;
    int m = 10;

    cout << "RESPONSE ==> " << modularExponentiation(x, n, m);
    return 0;
}